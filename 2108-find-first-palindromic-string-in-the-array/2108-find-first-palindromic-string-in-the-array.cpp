class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        string ans="";
        for(int i=0;i<n;i++)
        {
            string s=words[i];
            string h=s;
            reverse(s.begin(),s.end());
            if(s==h)
            {
                ans=s;
                return ans;
            }
        }
    return ans;
        
    }
};