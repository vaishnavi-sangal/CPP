class Solution {
public:
    int numRabbits(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){ans=ans+1;continue;}
            
            if(m.find(nums[i])==m.end()){
                ans+=nums[i]+1;
                m[nums[i]]=nums[i]+1;
            }
            else{
                m[nums[i]]--;
                if(m[nums[i]]==1){
                    m.erase(nums[i]);
                }
                continue;
            }
        }
        return ans;
    }
};