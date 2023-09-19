class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int start=0;
    int end=n-1;// find the place where value is equal to index
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]==mid)
        {
            if(nums[mid-1]==(mid-1))
            {
                end=mid-1;
                continue;
            }
            
            return mid;
        
        }
        else if(nums[mid]>mid)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
    }
    return -1;
      
        
    }
};