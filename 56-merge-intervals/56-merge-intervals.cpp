class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        int n=interval.size();
        sort(interval.begin(),interval.end());
       vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            if(ans.empty())
            {
                ans.push_back(interval[i]);
            }
            else
            {
                vector<int>&v=ans.back();
               // v.push_back(ans.back());
                int y=v[1];
                if(interval[i][0]<=y)
                {
                    v[1]=max(interval[i][1],y);
                }
                else
                {
                    ans.push_back(interval[i]);
                }
            }
        }
        return ans;
    }
};