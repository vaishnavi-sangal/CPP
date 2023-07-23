class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n1=nums1.size();
        int n2=nums2.size();
        stack<int>st;
        for(int i=0;i<n1;i++)
        {
            bool p=false;
            for(int j=0;j<n2;j++)
            {
                
                if(nums1[i]==nums2[j])
                {
                    for(int k=j+1;k<n2;k++)
                    {
                        if(nums2[k]>nums1[i])
                        {
                            ans.push_back(nums2[k]);
                            p=true;
                            break;
                        }
                    }
                    if(p==false)
                        ans.push_back(-1);
                }
                
                
            }
        }
        return ans;
        
    }
};