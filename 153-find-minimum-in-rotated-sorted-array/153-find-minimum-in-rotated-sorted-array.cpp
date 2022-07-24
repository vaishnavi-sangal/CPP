
      class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int mid;
        int idx=0;
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]<nums[idx]){
                h=mid-1;
                idx=mid;
        }
            else{
                l=mid+1;
            }
    }
                    return nums[idx];

  
    }
};