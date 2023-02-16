//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int n, int k, vector<char> &tasks) {
        int c=0;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[tasks[i]]++;
        }
          priority_queue <int> pq;
        for(auto it:mp)
        {
            pq.push(it.second);
        }
    //    priority_queue <int> pq;
        while(!pq.empty())
        {
            vector<int>a;
            for(int i=0;i<=k;i++)
            {
                if(!pq.empty())
                {
                   
                     a.push_back(pq.top());
                pq.pop();
                }
              
                //c++;
            }
           for(int i=0;i<a.size();i++)
            {
                a[i]--;
                if(a[i]>0)
                pq.push(a[i]);
            }
             if(pq.empty())
            c+=a.size();
            else
            c+=(k+1);
        }
        return c;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends