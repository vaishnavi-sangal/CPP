//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


/*pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    pair<int,int>p;
   sort(arr,arr+n);
   int a=lower_bound(arr,arr+n,x);
   int b=upper_bound(arr,arr+n,x);
   p={a,b};
   return p;*/
   
   pair<int, int> getFloorAndCeil(int arr[], int n, int x) {

    sort(arr,arr+n);

    pair<int,int> p;

    if(binary_search(arr,arr+n,x)){

        p.first=x;

        p.second=x;

    }

    else{

        int i1 = lower_bound(arr,arr+n,x)-arr-1;

        int i2 = upper_bound(arr,arr+n,x)-arr;
       // cout<<i1;

        p.first=arr[i1];

        p.second=arr[i2];

        if(i1<0){

            p.first=-1;

        }

        if(i2>=n){

            p.second=-1;

        }

    }

    return p;

}

    
    
    
   /* pair<int, int> getFloorAndCeil(int arr[], int n, int x) {

    // code here

    int c=-1;

    int f=-1;

    pair<int,int>p;

    sort(arr,arr+n);

   int high=n-1;

    int low=0;

    while(low<=high){

        int mid=(low+high)/2;

        if(arr[mid]==x){

            c=arr[mid];

            f=arr[mid];

            break;

        }else if(arr[mid]<x){

            f=arr[mid];

            low=mid+1;

        }else{

            c=arr[mid];

            high=mid-1;

        }

    }

    p={f,c};

    return p;

}
    
}*/