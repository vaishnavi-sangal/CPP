class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string str;
        bool ans=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                str.push_back(tolower(s[i]));
            }
            if(s[i]>=97 && s[i]<=122)
            {
                str.push_back(s[i]);
            }
            if(s[i]>=48 && s[i]<=57)
            {
                str.push_back(s[i]);
            }
        }
        string h=str;
         reverse(str.begin(),str.end());
        if(h==str)
        {
            ans=true;
}
        
        return ans;
        
    }
};