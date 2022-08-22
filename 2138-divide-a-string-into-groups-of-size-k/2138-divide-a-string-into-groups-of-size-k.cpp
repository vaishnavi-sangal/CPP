class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        string v="";
        for(int i=0;i<s.size();i)
        {
            for(int j=0;j<k;j++)
            {
                if(i<s.size())
                v+=s[i++];
                else
                    v+=fill;
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
        
    }
};