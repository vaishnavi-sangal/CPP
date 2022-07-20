class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=words.size();
        map<char,vector<int>>m;
        int count=0;
        int i=0;
        for(auto it:s)
        {
            m[it].push_back(i++);
        }
    //    int latest=-1;
        for(int i=0;i<n;i++)
        {
            int latest=-1;
            string str=words[i];
            for(int j=0;j<str.size();j++)
            {
                auto it=upper_bound(m[str[j]].begin(),m[str[j]].end(),latest);
                if(it==m[str[j]].end())
                {
                    break;
                }
                latest=*it;
                if(j==str.size()-1)
                {
                    count++;
                }
            }
            
        }
        return count;
        
    }
};