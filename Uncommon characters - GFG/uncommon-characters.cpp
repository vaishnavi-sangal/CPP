//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string a, string b)
        {
            string ans="";
            set<char>st;
           unordered_map<char,int>mp;
           for(int i=0;i<a.size();i++)
           {
               mp[a[i]]++;
           }
           for(int j=0;j<b.size();j++)
           {
               if(mp[b[j]]>0)
               {
                   
               }
               else
               {
                   st.insert(b[j]);
               }
           }
           mp.clear();
            for(int i=0;i<b.size();i++)
           {
               mp[b[i]]++;
           }
           for(int j=0;j<a.size();j++)
           {
               if(mp[a[j]]>0)
               {
                   
               }
               else
               {
                   st.insert(a[j]);
               }
           }
           for(auto it:st)
           {
               ans.push_back(it);
           }
          
          // sort(ans.begin(),ans.end());
           if(ans.size()>=1)
           return ans; 
           
           return "-1";
            // code here
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends