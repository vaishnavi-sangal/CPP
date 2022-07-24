class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        string ans="";
      //  s=to_upper(s);
        string str="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U' )
            {
                str+=s[i];
            }
        }
        reverse(str.begin(),str.end());
        int n2=0;
     //   cout<<str;
         for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                ans+=str[n2];
                n2++;
            }
             else
             {
                 ans+=s[i];
             }
        }
        return ans;
    }
};