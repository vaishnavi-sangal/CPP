class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int c=0;
        unordered_map<char,int>mp;
        int i=0,j=0;
        while(j<n)
        {
            if((j-i+1)<3)
            {
                mp[s[j]]++;
                j++;
            }
            else if((j-i+1)==3)
            {
                mp[s[j]]++;
                if(mp.size()==3)
                    c++;
                j++;
            }
            else
            {
                mp[s[i]]--;
                if(mp[s[i]]==0)
                    mp.erase(s[i]);
                i++;
            }
        }
        return c;
    }
};