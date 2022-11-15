//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        string ans="";
        sort(arr,arr+N);
        
            string s=arr[0];
            string k=arr[N-1];
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==k[j])
                {
                    
                    ans+=s[j];
                }
                else
                {
                    break;
                }
            }
    
        if(ans!="")
        {
            return ans;
        }
    
    
    else{
        return "-1";
    }
        // your code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends