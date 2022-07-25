class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        vector<int>result;
        priority_queue<pair<int,int>>pq;
        for(auto it:m)
        {
            pq.push({it.second,it.first});
        }
        for(int i=0;i<k;i++)
        {
            pair<int,int> p=pq.top();
                pq.pop();
            ans.push_back(p.second);
        }
        return ans;
        
        
    }
};