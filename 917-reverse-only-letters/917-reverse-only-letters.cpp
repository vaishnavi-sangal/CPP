class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
    string str="";
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]>=65 && s[i]<=90 || s[i]>=97&&s[i]<=122)
            {
                str+=s[i];
            }
        }
        reverse(str.begin(),str.end());
        int j=0;
          for(int i=0;i<n;i++)
        {
            if(s[i]>=65 && s[i]<=90 || s[i]>=97&&s[i]<=122)
            {
                ans+=str[j++];
            }
              else
              {
                  ans+=s[i];
              }
        }
        
        return ans;
        
    }
};