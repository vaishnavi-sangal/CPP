class Solution {
public:
     int lengthOfLongestSubstring(string s) {
    int size=0;
    int n=s.size();
    int i=0,j=0;
   unordered_map<char,int>mp;
         while(j<n)
         {
             if(mp.find(s[j]) == mp.end())
             {
                 mp[s[j]]++;
                 size=max(size,(j-i+1));
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
         return size;
     }

};