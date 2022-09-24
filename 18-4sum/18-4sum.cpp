

typedef long long ll;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n= nums.size();
        set<vector<int>> st; //  set is used to settle duplicacy, also for complex data_type we can not use unordered_set
        vector<vector<int>> ans;
            
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                int k= j+1, l=n-1;
                while(k<l){
                ll sum = (ll)nums[i] + (ll)nums[j] + (ll)nums[k] + (ll)nums[l];
                if(sum <(ll)target)
                    k++;
                else if(sum > (ll)target)
                    l--;
                else{
                    st.insert({nums[i],nums[j], nums[l], nums[k]});
                    k++; l--;
                   }
                }
            }
        }
        for(auto i: st)
            ans.push_back(i);
        
        return ans;
    }
};