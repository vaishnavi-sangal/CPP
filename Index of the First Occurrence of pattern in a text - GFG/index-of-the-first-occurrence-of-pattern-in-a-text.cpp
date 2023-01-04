//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMatching(string text, string pat) {
        int n=text.size();
        int m=pat.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(text[i]==pat[j])
            {
                j++;
                  if(j==m)
                {
                    return i;
                }
                for(int k=i+1;k<n;k++)
                {
                    if(text[k]==pat[j])
                    {
                        j++;
                        if(j==m)
                        {
                            return i;
                        }
                    }
                    else
                    {
                        j=0;
                        break;
                        
                    }
                }
                if(j==m)
                {
                    return i;
                }
            }
        }
        return -1;
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string text, pat;
        cin >> text >> pat;
        Solution obj;
        cout << obj.findMatching(text, pat) << endl;
    }
    return 0;
}
// } Driver Code Ends