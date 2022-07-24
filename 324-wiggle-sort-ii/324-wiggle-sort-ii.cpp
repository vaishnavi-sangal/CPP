class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=1;
        int j=n-1;
        vector<int>res(n);
        while(i<n)
        {
            res[i]=nums[j];
            j--;
            i+=2;
        }
        i=0;
        while(i<n)
        {
            res[i]=nums[j];
            j--;
            i+=2;
        }
        for(i=0;i<n;i++)
        {
            nums[i]=res[i];
        }
    }
};