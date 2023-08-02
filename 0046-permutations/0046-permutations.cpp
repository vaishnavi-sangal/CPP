class Solution {
public:
//int n=nums.size();
void solve(vector<int>&a,vector<vector<int>>&ans,int i,vector<int>&nums)
{
    int n=nums.size();
    if(i==(n-1))
    {
        ans.push_back(nums);
        return;
    }
    for(int j=i;j<n;j++)
    {
        swap(nums[i],nums[j]);
        solve(a,ans,i+1,nums);
        swap(nums[i],nums[j]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>a;
        solve(a,ans,0,nums);
        return ans;
        
    }
};