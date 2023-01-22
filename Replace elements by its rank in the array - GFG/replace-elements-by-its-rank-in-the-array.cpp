//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

   vector<int> replaceWithRank(vector<int> &arr, int n){
       vector<int>ans,v;
       ans=arr;
       int k=1;
       unordered_map<int,int>mp;
       sort(arr.begin(),arr.end());
       for(int i=0;i<n;i++)
       {
           if(mp[arr[i]]<1)
           {
               mp[arr[i]]=k++;
           }
       }
       for(int i=0;i<n;i++)
       {
           v.push_back(mp[ans[i]]);
       }
       return v;

      


   

    }

};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec,n);
        for(int i = 0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends