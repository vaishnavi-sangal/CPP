class Solution {
public:
int maximumProduct(vector<int> nums, int k) {

    priority_queue<int,vector<int>,greater<int>>q;
   for(int i=0;i<nums.size();i++)
   {
       q.push(nums[i]);
   }
    
    for(int i=0;i<k;i++)
    {   
        int x=q.top();
        q.pop();
        q.push(x+1);
    }
    long p=1;
    int mod=1e9+7;
    while(!q.empty())
    {
        p=(p%mod*q.top()%mod)%mod;
        q.pop();
    }
    return p;
}
};