class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n=nums.size();
            int score=nums[0];
        
            
            priority_queue<pair<int,int>>pq;
        pq.push({nums[0],0});
        
        
        for(int i=1;i<n;i++)
        {
            while(!pq.empty() && pq.top().second+k<i)
            {
                pq.pop();
                
            }
            score=nums[i]+pq.top().first;
            pq.push({score,i});
        }
        return score;
        
        
        
    }
};