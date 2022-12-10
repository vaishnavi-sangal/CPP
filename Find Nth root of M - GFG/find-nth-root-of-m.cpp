//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	double mul(int n, int m){
        double ans=1;
        for(int i=1;i<=n;i++){
            ans *= m;
        }
        return ans;
    }
	int NthRoot(int n, int m)
	{
	    int  l = 0, r =m;
		while(l<=r ){
		    int mid = (l+r)/2;
		    if(mul(n,mid)==m ){
		        return mid;
		    }else if(mul(n,mid) > m ){
		        r = mid-1;
		    }else{
		        l = mid+1;
		    }
		}
		return -1;

	    // Code here.
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends