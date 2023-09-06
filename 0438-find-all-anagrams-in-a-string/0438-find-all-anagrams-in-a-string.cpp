class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int n=s.size();
        
        int m=p.size();
        unordered_map<char,int>mp,mp1;
        for(int i=0;i<m;i++)
        {
            mp[p[i]]++;
}
      int i=0,j=0;
        while(j<n)
        {
                            mp1[s[j]]++;

            if((j-i+1)<m)
            {
               
                j++;
}
        else    if((j-i+1)==m)
        {
            // cout<<s.substr(i,j+1)+" ";
            
                if(mp1==mp)
                {
                    ans.push_back(i);
                }
            
                mp1[s[i]]--;
                if(mp1[s[i]]==0)
                    mp1.erase(s[i]);
                i++;
                j++;
           }
        }
        return ans;
    }
};