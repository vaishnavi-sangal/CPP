class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>a(nums.size());
        int g;
       //nt m=k%n;
        for(int i=0;i<n;i++)
        {
             g=(i+k)%n;
                a[g]=nums[i];
        }
        nums=a;
        
    }
};