class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>res;
        if(k>s.size())
        {
            return false;
        }
        for(int i=0;i<=s.length()-k;i++)
        {
            res.insert(s.substr(i,k));
        }
        return res.size()==pow(2,k);
     //      return true;
        
        
    }
};