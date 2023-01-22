//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &bills) {
        bool ans=false;
        int c=0,a=0;;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                c++;
                continue;
            }
            else if(bills[i]==10)
            {
                
                if(c>0)
                {
                c--;
                a++;
                }
                else
                {
                    return false;
                }
            }
            else if(bills[i]==20)
            {
                if(a>=1 && c>=1)
                {
                    a--;
                    c--;
                }
                else if(c>=3)
                {
                    c--;
                    c--;
                    c--;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
        
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends