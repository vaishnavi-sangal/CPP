class Solution {
public:

    int dp[301];
    int help(int i,string s,set<string>&word){
        if(i==s.size()){
            return 1;
        }
        string temp;
        if(dp[i]!=-1){
            return dp[i];
        }
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(word.find(temp)!=word.end()){
                if(help(j+1,s,word)){
                    return dp[i]=1;
                }
            }
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& word) {
        set<string> st;
        memset(dp,-1,sizeof dp);
        for(auto a:word)st.insert(a);
        return help(0,s,st);
    }
};
