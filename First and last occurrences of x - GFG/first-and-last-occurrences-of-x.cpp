// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int>v;
    if(binary_search(arr,arr+n,x)==false)
    {
        v.push_back(-1);
        v.push_back(-1);
        return v;
    }
    int a=lower_bound(arr,arr+n,x)-arr;
    int b=upper_bound(arr,arr+n,x)-arr-1;
    //if(a<0)
   // {
      //  v.push_back(-1);
   // }
   // else
   // {
    v.push_back(a);
   // }
   /* if(b>=n)
    {
        v.push_back(-1);
    }
    else
    {*/
    v.push_back(b);
   // }
    return v;
    // code here
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends