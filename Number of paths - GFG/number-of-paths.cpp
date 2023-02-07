//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends


int c=0;
long long solve(int i,int j,int m,int n)
{

    if(i==(m-1) && (j==(n-1)))
    {
        c++;
        return c;
    }

   if(i+1<m && j+1<n)
    {
        int a=solve(i+1,j,m,n);
        int b=solve(i,j+1,m,n);
        return a+b;
        
    }
  if((j+1)>=n && i+1<m)
    {
    solve(i+1,j,m,n);
    return 1;
    }
    if((j<n && (i+1)>=m))
    {
        solve(i,j+1,m,n);
        return 1;
    }
   
    return c;
}
long long  numberOfPaths(int m, int n)
{
    long long ans=solve(0,0,m,n);
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