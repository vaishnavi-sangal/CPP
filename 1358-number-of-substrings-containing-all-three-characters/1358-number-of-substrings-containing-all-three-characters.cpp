class Solution {
public:
    int numberOfSubstrings(string s) {
        int c=0;
        unordered_map<char,int>mp;
        int i=0,j=0;
       while(j < s.length()){
            mp[s[j]]++;
            if(mp.size() == 3){
                while(mp.size() == 3){
                    c += s.length()-j;
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
            
        }
        return c;
        
    }
};