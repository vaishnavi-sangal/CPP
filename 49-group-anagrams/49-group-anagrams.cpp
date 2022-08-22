class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
      int n=strs.size();
          unordered_map<string,vector<string>>m;
        for(int i=0;i<n;i++)
        {
            string s=strs[i];
            string temp=s;
            sort(s.begin(),s.end());
         //   unordered_map<string,vector<string>>m;
            m[s].push_back(temp);
        }
        for(auto it:m)
        {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};