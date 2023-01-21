//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int countSetBits(int n){
        int cnt=0;
        while (n) {
            n &= (n - 1);
            cnt++;
        }
        return cnt;
    }
  public:
    int minVal(int a, int b) {
        // code here
        int bSetBits = countSetBits(b);
        int aSetBits = countSetBits(a);
        int diff = abs(aSetBits - bSetBits);
        if(diff==0) return a;
        else if(aSetBits>bSetBits){
            while(diff){
                //remove LSB
                a=a & (a-1);
                diff--;
            }
        }
        else{
            while(diff){
                //remove MSB
                a=a | (a+1);
                diff--;
            }
        }
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends