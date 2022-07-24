class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>ans;
        vector<int>ans2;
        set<int>st;
   //     sort(nums1.begin(),nums1.end());
  //       sort(nums2.begin(),nums2.end());
       for(int i=0;i<n1;i++)
       {
           for(int j=0;j<n2;j++)
           {
               if(nums1[i]==nums2[j])
               {
                   ans.push_back(nums1[i]);
               }
           }
       }
        for(auto it:ans)
        {
            st.insert(it);
        }
         for(auto it:st)
        {
            ans2.push_back(it);
        }
        
        return ans2;
    }
};