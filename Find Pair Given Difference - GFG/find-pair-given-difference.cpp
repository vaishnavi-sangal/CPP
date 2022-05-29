// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    int start=0;
    int end=1;

    
    int diff;
  
    while(start<size && end<size)
    {
        diff=arr[end]-arr[start];
        if(diff<n)
        {
            end++;
        }
        if(diff>n)
        {
            start++;
            if(start==end)
            {
                end++;
            }
        }
    //    diff=arr[start]-arr[end];
        if ((diff==n) && (start!=end))
        {
            return true;
        }
    }

return false;

    
    
    
    
    //code
    
}