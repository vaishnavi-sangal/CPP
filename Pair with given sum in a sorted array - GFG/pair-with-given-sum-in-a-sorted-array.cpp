//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        int ans=0;
        int start=0;
        int end=n-1,flag=0;
        while(start<end)
        {
            int mid=(start+end)/2;
            if(arr[start]+arr[end]==sum)
            {
                ans++;
                start++;
                flag=1;
                end--;
            }
            else if(arr[start]+arr[end]>sum)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        if(flag==0)
        return -1;
        return ans;
        // Complete the function
    
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends