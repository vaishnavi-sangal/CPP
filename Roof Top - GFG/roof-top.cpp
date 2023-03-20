//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int arr[], int n)
    {
       //Your code here
       int maxi=0,c=0;
       for(int i=0;i<n;i++)
       {
           
           if (i+1<n && arr[i+1]>arr[i])
           {
               c++;
           }
           else
           {
               maxi=max(maxi,c);
               c=0;
           }
       }
       if(c!=0)
       maxi=max(c,maxi);
       return maxi;
    }
};

//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout << ob.maxStep(a, n) << endl;
	}
	return 0;
}
// } Driver Code Ends