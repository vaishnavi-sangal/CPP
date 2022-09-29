class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
    
    multimap<int,int>mp;
        multimap<int,int>::iterator itr;
        for(int i=0;i<arr.size();i++)
        {
            mp.insert(pair<int,int>(abs(arr[i]-x),arr[i]));
        }
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            if(k>0)
            {
                ans.push_back(itr->second);
                k--;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    
            
    }
};