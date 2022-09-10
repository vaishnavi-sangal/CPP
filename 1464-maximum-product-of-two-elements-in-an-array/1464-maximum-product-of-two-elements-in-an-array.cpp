class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int n=nums.size()-1;
         ans=(((nums[n])-1)*((nums[n-1])-1));
        return ans;
        
    }
};