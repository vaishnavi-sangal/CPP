class Solution {
public:
    bool canConstruct(string s1, string s2) {
        bool ans=true;
        vector<int>visited(s2.size(),-1);
        for(int i=0;i<s1.size();i++)
        {
            int k=-1;
            for(int j=0;j<s2.size();j++)
            {
                if(s1[i]==s2[j] && visited[j]==-1)
                {
                    visited[j]=0;
                    k=0;
                    break;
                }
                
                
            }
            if(k==-1)
                return false;
        }
        return ans;
        
        
    }
};