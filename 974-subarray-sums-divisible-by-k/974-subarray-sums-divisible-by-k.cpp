class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // remainder with thier count store
        unordered_map<int,int>mp;
        // base case -->[4,0] k=4 
        mp[0]++;
        // prefix sum array
        int runningsum=0;
        int ans=0;
        for(int i=0;i<size(nums);i++)
        {
            runningsum+=nums[i];
            int rem = runningsum%k;
            if(rem<0)rem+=k; // property of remainder if found negative
                            //3 % 2 returns 1. However, -3 % 2 is -1 
            if(mp.find(rem)!=mp.end())
            {
                // if rem is found      
                ans+=mp[rem];
                 mp[rem]++; // incre the count 
            }
            else{
                mp[rem]++;
            }
        }
        return ans;
    }
};