// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long k)
	{
	   //nt count=0;
	    int c=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	    int start=i+1;
	    int end=n-1;
	  //int c=0;
	    int sum=0;
	    while(start<end)
    {
        sum=arr[i]+arr[start]+arr[end];
        if(sum>=k)
        {
            end--;
        }
        else
        {
           c+=end-start;
           start++;
        }
    
    }
    }
    return c;
	    
	    // Your code goes here
	}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends