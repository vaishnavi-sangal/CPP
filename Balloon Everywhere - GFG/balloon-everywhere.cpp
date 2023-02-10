//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        int n=s.size();
        int a=0,b=0,c=0,d=0,e=0;
      //  unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='b')
            {
                a++;
            }
            if(s[i]=='a')
            {
                b++;
            }
            if(s[i]=='l')
            {
                c++;
            }
            if(s[i]=='o')
            {
                d++;
            }
            if(s[i]=='n')
            {
                e++;
            }
        
        }
        c=c/2;
        d=d/2;
        int mini=min(a,b);
        int minii=min(mini,c);
        int p=min(minii,d);
        int ans=min(p,e);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends