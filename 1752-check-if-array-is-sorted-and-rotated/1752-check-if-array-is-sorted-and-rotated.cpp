class Solution {
public:
    bool check(vector<int>& nums) {
        bool ans=false;
        int count=0;
        int n=nums.size();
      for(int i=1;i<n;i++)
      {
          if(nums[i-1]>nums[i])
          {
              count++;
}
      }
        if(nums[n-1]>nums[0])
        {
            count++;
        }
        if(count<=1)
        {
            ans=true;
        }
        return ans;
        
    }
};