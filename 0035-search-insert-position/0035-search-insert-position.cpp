class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int ans=0;
        int n=nums.size();
        int start=0,end=n-1;
        int mid=0;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                ans=mid;
                end=mid-1;
            }
        }
        if(ans==0 && target<nums[0])
                                 {
                                 return 0;
                                 }
                                 else if(ans==0 && target>nums[n-1])
            return n;
    
            return ans;
    }
};