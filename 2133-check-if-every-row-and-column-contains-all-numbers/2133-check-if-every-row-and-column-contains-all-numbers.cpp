class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=n,k=n;
        int l=0,o=0;
        while(m>0)
        {
            set<int>s;
        for(int i=0;i<n;i++)//checking evry row
        {
            s.insert(matrix[l][i]);
        }
            l++;
            
            if(s.size()!=n)
            {
                return false;
                break;
            }
         m--;
            }
           while(k>0)
        {
            set<int>s;
        for(int i=0;i<n;i++)//checking evry row
        {
            s.insert(matrix[i][o]);
        }
            o++;
            
            if(s.size()!=n)
            {
                return false;
                break;
            }
         k--;
            }
        return true;
    }
};