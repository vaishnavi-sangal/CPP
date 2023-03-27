//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends

void solve(int i,int j,int m,int n,long long int &ans)
{
    if(i==(m-1) && j==(n-1))
    {
        ans++;
        return;
    }
    if(i>=m)
    {
        return;
    }
    if(j>=n)
    {
        return ;
    }
    
    if((j+1)<n)
    {
        solve(i,j+1,m,n,ans);
    }
    if((i+1)<m)
    {
        solve(i+1,j,m,n,ans);
    }
    
}

long long  numberOfPaths(int m, int n)
{
    long long ans=0;
    solve(0,0,m,n,ans);
    return ans;
    // Code Here
}

//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends