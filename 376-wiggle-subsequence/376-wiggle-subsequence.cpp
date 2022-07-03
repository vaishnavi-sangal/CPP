class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        int p=0,c;
        int l=1;
        for(int i=1;i<n;i++)
        {
            c=nums[i]-nums[i-1];
            if((c>0 && p<=0)|| (c<0&&p>=0))
            {
                l++;
                p=c;
            }
        }
        return l;
        
    }
};