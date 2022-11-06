//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        int ans=0;
       unordered_map<int,int>mp1,mp2;
       for(int i=0;i<n;i++)
       {
           mp1[a[i]]++;
       }
         for(int i=0;i<m;i++)
       {
           mp2[b[i]]++;
       }
          for(int i=0;i<n;i++)
       {
           if(mp1[a[i]]&&mp2[a[i]])
           {
               ans++;
               mp1.erase(a[i]);
               mp2.erase(a[i]);
           }
           
       }
      
       return ans;
        // Your code goes here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends