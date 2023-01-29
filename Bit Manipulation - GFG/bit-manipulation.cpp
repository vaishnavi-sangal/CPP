//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void bitManipulation(int num, int i) {
       // cout<<(1>>(i-1));
       i=i-1;
       int getbit=((num&(1<<i))==0)?0:1;
       int setbit=num | (1<<i);
       int clearbit= num & (~(1<<i));
       cout<<getbit<<" "<<setbit<<" "<<clearbit;
        // your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends