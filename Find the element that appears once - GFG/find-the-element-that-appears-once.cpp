//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int n){
	    int low=0;
	    int high=n-1;
	     while(low<high){
            int mid = (low+high)/2;
            //if mid index is odd ,it means numbers are even . so it is in pair(i-1,i)
            //if mid index is even,it means numbers are odd. so it is in pair(i,i+1)
            if((mid%2==0 && A[mid]==A[mid+1]) ||(mid%2!=0 && A[mid-1]==A[mid])){
                //left are perfect, go to right
                low= mid+1;
            }else{
                //left is not perfect, go to left
                high = mid;
            }
        }
        return A[low];
	    //code
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends