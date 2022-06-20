class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string>s1(words.begin(),words.end());
        set<string>s2(words.begin(),words.end());
        for(auto it:s1)
        {
            for(int i=1;i<it.size();i++)
            {
                s2.erase(it.substr(i));
            }
        }
        int sum=0;
        for(auto j:s2)
        {
            sum+=j.size()+1;
            
        }
        return sum;
        
    }
};