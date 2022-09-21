class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        vector<int>a;
        vector<int>b;
        vector<int>c;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                a.push_back(nums[i]);
            }
             if(nums[i]>pivot)
            {
                c.push_back(nums[i]);
            }
             if(nums[i]==pivot)
            {
                b.push_back(nums[i]);
            }
            
            
            
        }
        for(auto it:a)
        {
            ans.push_back(it);
        }
         for(auto it:b)
        {
            ans.push_back(it);
        }
         for(auto it:c)
        {
            ans.push_back(it);
        }
        return ans;
    }
};