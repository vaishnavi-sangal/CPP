class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();

        bool l1=false,l2=false;
       
        for(int i=0;i<n-1;i++)
        {
           if(nums[i]<nums[i+1])
           {
               l2=true;
           }
            if(nums[i]>nums[i+1])
            {
                l1=true;
            }
            if(l1 && l2)
                return false;
            
        }
        return true;
     
    }
};