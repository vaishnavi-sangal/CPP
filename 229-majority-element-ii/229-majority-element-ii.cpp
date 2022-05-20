class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>m;
        if(n==1)
        {
           ans.push_back(nums[0]); 
        }
        else{
        int a=n/3;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
            
         }
        for(auto j:m)
        {
            if(j.second>a)
            {
                ans.push_back(j.first);
             }
        }
        }
        return ans;
        
    }
};