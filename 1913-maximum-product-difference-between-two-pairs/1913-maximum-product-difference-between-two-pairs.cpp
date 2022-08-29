class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        int diff=INT_MIN;
        int a,b;
      sort(nums.begin(),nums.end());
        a=nums[0]*nums[1];
        b=nums[n-1]*nums[n-2];
         diff=b-a;
        return diff;
        
    }
};