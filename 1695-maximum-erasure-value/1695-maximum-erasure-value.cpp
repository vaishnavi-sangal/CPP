class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
      int start=0,end=0;
        set<int>s;
        int sum=0;
        int res=0;
        while(end<n)
        {
            while(s.find(nums[end])!=s.end() && start<end)
            {
                s.erase(nums[start]);
                sum-=nums[start++];
            }
            s.insert(nums[end]);
            sum+=nums[end++];
          //end++;
            res=max(sum,res);
        }
        return res;
        
    }
};