class Solution {
public:
    vector<string> wordSubsets(vector<string>& a, vector<string>& b) {
        vector<int>count(26),temp(26);
        vector<string>ans;
        for(auto str:b){
            temp = countOfCharacters(str);
            for(int i=0;i<26;i++){
                count[i] = max(count[i],temp[i]);
            }
        }
        for(auto str:a){
            temp = countOfCharacters(str);
            int i;
            for(i=0;i<26;i++){
                if(count[i]>temp[i])
                    break;
            }
            if(i==26)
                ans.push_back(str);
        }
        return ans;
    }
    vector<int>countOfCharacters(string str){
        vector<int>cnt(26);
        for(auto c:str){
            cnt[c-'a']++;
        }
        return cnt;
    }
};