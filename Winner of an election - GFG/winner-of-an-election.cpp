//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n){

        vector<string> v;

        map<string, int> m;

        for(int i=0; i<n; i++)

            m[arr[i]]++;

        int ans = 0;

        string s = "";

        for(auto it=m.begin(); it!=m.end(); it++){

            if(it->second > ans){

                ans = it->second;

                if(v.size() > 0)

                  v.pop_back();

                v.push_back(it->first);

            }

        }

        s += to_string(ans);

        v.push_back(s);

        return v;

    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends