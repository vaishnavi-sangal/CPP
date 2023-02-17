//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    long long solve(int n, int k, vector<long long> a) {
        long long ans=0;
        if(n==k)
        {
            return a[k-1];
        }
        long long sum=0;
       for(int i=0;i<k;i++)
       {
           sum+=a[i];
       }
       a.push_back(sum);
       int i=0,j=k;
       while(j!=n)
       {
           sum-=a[i];
           sum+=a[j];
           a.push_back(sum);
           i++;
           j++;
       }
       return a[n-1];
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends