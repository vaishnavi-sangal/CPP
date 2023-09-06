class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n1=s1.size();
        int n=s2.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n1;i++)
        {
            mp[s1[i]]++;
        }
        int  i=0,j=0;
        unordered_map<char,int>mp2;
        while(j<n)
        {
            if((j-i+1)<n1)
            {
                mp2[s2[j]]++;
                j++;
            }
            else if((j-i+1)==n1)
            {
                mp2[s2[j]]++;
            
                if(mp==mp2)
                    return true;
                mp2[s2[i]]--;
                if(mp2[s2[i]]==0)
                    mp2.erase(s2[i]);
                i++;
                j++;
            }
        }
        return false;
       
        ;
    }
};