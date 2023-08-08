class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strList) {
        unordered_map<string,vector<string>> mp;
    for(int i=0;i<strList.size();i++){
        string curr=strList[i];
        string temp=curr;
        sort(curr.begin(),curr.end());

        mp[curr].push_back(temp);
    }
    vector<vector<string>> ans; 
    for(auto curr:mp){
        ans.push_back(curr.second);
    }
    return ans;  
    }
};