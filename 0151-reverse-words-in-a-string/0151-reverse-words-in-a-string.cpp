class Solution {
public:
    string reverseWords(string s) {
      string ans="";
        vector<string>v;
        int n=s.size();
        string a="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!=32)
            {
                a+=s[i];
            }
            else
            {
                if(a!=""){
                v.push_back(a);
                a="";
                }
            }
        
        }
        if(a!="")
        v.push_back(a);
        reverse(v.begin(),v.end());
        for(auto it:v)
        {
            ans+=it;
            ans+=" ";
        }
        ans.pop_back();
          return ans;
    }
};