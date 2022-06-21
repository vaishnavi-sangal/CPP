class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
     // vector<int>nums;
        vector<int>v;
         priority_queue<pair<int,int>>p;
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            p.push({-it.second,it.first});
        }
        //while()
        int k=0;
        while(p.size()>0)
        {
            int x=p.top().first;
            for(int i=1;i<=abs(x);i++)
            {
                nums[k++]=p.top().second;
            }
            p.pop();
        }
        
       // priority_queue<pair<int,int>>p;
        return nums;
        
    }
};