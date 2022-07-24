/*class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n2=nums2.size();
        int n1=nums1.size();
        vector <int>ans;
        map<int,int>m1;
        for(int i=0;i<n1;i++)
        {
            m1[nums1[i]]++;
        }
        for(int i=0;i<n2;i++)
        {
            auto it=m1.find(nums2[i]);
            while(it!=m1.end()&&it->second>0)
            {
                ans.push_back(nums2[i]);
                it->second--;
            }
        }
        return ans;
    }
};*/


class Solution {
public:
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> mp;
    for(int c:nums1){
        mp[c]++;
    }
    vector<int > res;
    for(int c: nums2){
        if(mp[c]>0){
            res.push_back(c);
            mp[c]--;
        }
    }    
    return res;
    
}
};