class Solution {
public:
  
    

int maxScore(vector<int>& nums, int k) {
        int n = nums.size() ;
        long long sum = 0 ;
        int i= k-1 , j = n-1 ;
        sum = accumulate(nums.begin() , nums.begin() + k , (long long)0 ) ;
        long long ans = sum ;
        while(i>=0){
            sum -= nums[i] ;
            sum += nums[j] ;
            ans = max(ans,sum);
            i--  ;
            j--  ;
        }
        return ans ;
    }
};