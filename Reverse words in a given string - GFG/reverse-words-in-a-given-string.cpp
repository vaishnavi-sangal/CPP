//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string ans="";
        int n=s.size();
        vector<string>v;
        string a="";
        for(int i=0;i<n;i++)
        {
        
            if(s[i]=='.')
            {
                v.push_back(a);
                a="";
                
            }
            else 
            {
                a+=s[i];
                
            }
        }
        v.push_back(a);
        for(int i=v.size()-1;i>=0;i--)
        {
            string k=v[i];
            ans+=k+".";
        }
        ans.pop_back();
       return ans; 
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends