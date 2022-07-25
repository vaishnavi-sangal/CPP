class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
           m[nums[i]]++;
        
        }
        for(int i=1;i<=n;i++)
        {
            if(m[i]<1)
            {
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};