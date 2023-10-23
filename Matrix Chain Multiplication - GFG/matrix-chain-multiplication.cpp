//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int dp[501][501];
//int mini=INT_MAX;
int solve(int i,int j,int arr[])
{
   // memset(dp,(-1),sizeof(dp));
    
    
    if(i>=j)
    return 0;
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    int mini=INT_MAX;
    for(int k=i;k<=j-1;k++)
    {
        int temp=solve(i,k,arr)+solve(k+1,j,arr)+arr[i-1]*arr[k]*arr[j];
        mini=min(mini,temp);
        dp[i][j]=mini;
        
    }
    return dp[i][j];
    
}
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        
        
         memset(dp,(-1),sizeof(dp));
        int i=1,j=N-1;
       int ans= solve(i,j,arr);
       return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends