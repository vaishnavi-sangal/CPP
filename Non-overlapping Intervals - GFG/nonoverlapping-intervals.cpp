//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minRemoval(int n, vector<vector<int>> &intervals) {
        //int n=intervals.size();
         int ans=0;
        sort(intervals.begin(),intervals.end());
        vector<int>v;
        v=intervals[0];
       // v.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<v[1])
            {
                ans++;
                v[1]=min(v[1],intervals[i][1]);
            }
            else{
                v[1]=intervals[i][1];
            }
        }
        return ans;
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

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(N, intervals) << endl;
    }
    return 0;
}
// } Driver Code Ends