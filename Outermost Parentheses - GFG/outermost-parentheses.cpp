//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
         int n = s.size();
        stack<char> st;
        int count = 0;
        string ans = "";

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                count++;

            else if (s[i] == ')')
                count--;

            st.push(s[i]);
            
            //one primitive decomposition found
            if (count == 0)
            {
                string temp = "";
                st.pop();

                while (st.size() != 1)
                {
                    temp += st.top();
                    st.pop();
                }

                st.pop();

                reverse(temp.begin(), temp.end());
                ans += temp;
            }
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends