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
vector <int>intersect(vector<int>& nums1, vector<int>& nums2) {
map<int,int> m;
vector<int> ans;
for(int i=0;i<nums1.size();i++){
m[nums1[i]]++;
}

    for(int i=0;i<nums2.size();i++){
        auto it = m.find(nums2[i]);
        if(it!=m.end() && it->second>0){
            ans.push_back(nums2[i]);
            it->second--;
        }
    }
    
    return ans;
}
};