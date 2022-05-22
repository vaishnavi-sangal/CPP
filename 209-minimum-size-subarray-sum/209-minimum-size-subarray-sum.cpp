class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int c=0,k=0,j=0;
        int mini=INT_MAX;
       // sort(nums.begin(),nums.end());
        int sum=0;
        if(n==0 || n==1&&n<target)
        {
            return 0;
        }
        else
        {
       while(j<n){
           c=0,sum=0;
            for(int i=j;i<n;i++){
             sum=sum+nums[i];
            c++;
            if(sum>=target)
            {
                mini=min(c,mini);
                k=mini;
                break;
            }
            
            
        
        }
           j++;
        
        }
        return k;
        }
        
    }
};