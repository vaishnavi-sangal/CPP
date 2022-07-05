class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int ans=1;
        int c=1;
        int prev=nums[0];
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]==nums[i]+1)
            {
                c++;
                if(ans<c)
                {
                    ans=c;
                }
                prev=nums[i];
                
            }
            else if (nums[i+1]==nums[i])
            {
                continue;
            }
            else
            {
                c=1;
            }
              //  ans=max(c,ans);
            
              //  prev=nums[i];
            }
        
      //  ans=max(c,ans);
        return ans;
        
    }
};