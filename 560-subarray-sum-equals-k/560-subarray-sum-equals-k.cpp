class Solution {
public:
   int subarraySum(vector<int>& nums, int k) {
        map<int, int> mp;
        int sum = 0, count = 0;
        mp[sum] = 1;
        
        for(auto it: nums){
            sum += it;
            int find = sum - k;
            
            if(mp.find(find) != mp.end()){
                count += mp[find];
            }
            cout<<count<<endl;
            mp[sum]++;
        }
        
        return count;
    
    }
};