//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	long long subCount(long long A[], int n, long long K)
	{
	     vector<int> counts(K, 0);
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += (A[i]%K + K)%K;
            counts[sum % K]++;
        }
        int result = counts[0];
        for(int c : counts)
            result += (c*(c-1))/2;
        return result;
    }




};


//{ Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	long long k;
		cin>>n >> k;
		long long a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
        

        Solution ob;
        cout << ob.subCount(a, n, k);
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends