class Solution {
public:
     int lengthOfLongestSubstring(string s) {
    int size=0;
    int n=s.size();
    int i=0,j=0;
    if(s.size()==1)
    return 1;
    unordered_map<char,int>mp;
    
    while(j<n)
    {
   if(mp[s[j]]==0)
   {
       mp[s[j]]++;
              size=max(size,(j-i+1));

       j++;
       cout<<"a";
   }
   else
   {
       cout<<" b";
       if(mp[s[i]]>0)
       {
           mp[s[i]]--;
           if(mp[s[i]]==0)
           {
               mp.erase(s[i]);
           }
       }
       i++;
       
   }

    }
    return size;
     }

};