class Solution {
public:
    bool isIsomorphic(string s, string t) {
          int n1=s.length();
        int n2=t.length();
        bool flag=false;
        unordered_map<char,char>m;
        unordered_map<char,char>m1;
        for(int i=0;i<n1;i++){
        if(!m[s[i]] && !m1[t[i]])
        {
            m[s[i]]=t[i];
            m1[t[i]]=s[i];
        }
        else if(m[s[i]]!=t[i] || m1[t[i]]!=s[i])
        {
            return false;
        }
            }
        return true;
      
    }
};