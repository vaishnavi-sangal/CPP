class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool ans=false;
        int k=0;
        vector<int>visited(t.size(),-1);
        for(int i=0;i<s.size();i++)
        {
            int flag=0;
           for(int j=k;j<t.size();j++)
           {
               if(s[i]==t[j])
               {
                   flag=1;
                   k++;
                   break;
               }
               else 
               {
                   k++;
                   continue;
               }
               
           }
            if(flag==0)
                return false;
           
        }
        return true;
        
    }
};