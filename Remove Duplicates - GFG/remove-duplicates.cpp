//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string s) 
	{
	    string ans;
	    unordered_map<char,int>mp;
	    for(int i=0;i<s.size();i++)
	    {
	        mp[s[i]]++;
	    }
	    for(int i=0;i<s.size();i++)
	    {
	        if(mp[s[i]]==1)
	        {
	            ans+=s[i];
	        }
	        else  if(mp[s[i]]!=-1){
	            ans+=s[i];
	            mp[s[i]]=-1;
	        }
	    }
	    return ans;
	    
	    // Your code goes here
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends