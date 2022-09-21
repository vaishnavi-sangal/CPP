


class Solution {
public:
    bool isEven(int num){
        if(num<0){
            num *= -1;
        }
        
        return (num%2==0);
    }
    
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int curSum = 0;
        
        for(int i=0;i<nums.size();i++){
            if(isEven(nums[i])){
                curSum += nums[i];
            }
        }
        
        for(int i=0;i<queries.size();i++){
            if(isEven(nums[queries[i][1]])){
                curSum -= nums[queries[i][1]];
            }
            
            nums[queries[i][1]] += queries[i][0];
            if(isEven(nums[queries[i][1]])){
                curSum += nums[queries[i][1]];
            }
            
            ans.push_back(curSum);
        }
        
        return ans;
    }
};