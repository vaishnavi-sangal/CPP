class Solution {
public: 
vector<vector<int>> subsets_All(vector<int>& nums) {
          vector<vector<int>> ans;
        
        for(int i=0; i<(1<<nums.size()); i++){
            vector<int> res;
            
            for(int j=0; j<nums.size(); j++){
                if(i & (1<<j))
                    res.push_back(nums[j]);
            }
            ans.push_back(res);
        }
        return ans; 
    }
	
       int subsetXORSum(vector<int>& nums) {
         auto subsets= subsets_All(nums);
        vector<int>res; int xor1=0;
        for(auto subset: subsets){
            for(int i=0; i<subset.size(); i++){
                    xor1=xor1^subset[i];
            }
            res.push_back(xor1);xor1=0;
        }
        int sum=0;
        for(int i=0; i<res.size(); i++){
            sum+=res[i];
        }
        return sum;
    }
    
};