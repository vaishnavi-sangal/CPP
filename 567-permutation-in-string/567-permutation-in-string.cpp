class Solution {
    bool equal(vector<int>s1,vector<int>s2)
    {
        for(int i=0;i<26;i++)
        {
if(s1[i]!=s2[i])
    return false;
            }
        return true;
            
}
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>fs1(26,0);
        vector<int>fs2(26,0);
        if(s2.size()<s1.size())
        {
            return false;
        
         }
        
    for(char ch:s1)
    {
        fs1[ch-'a']++;
     }
        int i=0;
        int j=0;
        while(j<s2.size())
        {
            fs2[s2[j]-'a']++;
            
            if(j-i+1==s1.size())
            {
                if(equal(fs1,fs2))
                {
                   return true;
                }
            }
                   
                    if(j-i+1<s1.size())
                   {
                       j++;
                   }
                   else
                   {
                       fs2[s2[i]-'a']--;
                       i++;
                       j++;
                   }
            
         }
                   return false;
        
     
        
    }
};