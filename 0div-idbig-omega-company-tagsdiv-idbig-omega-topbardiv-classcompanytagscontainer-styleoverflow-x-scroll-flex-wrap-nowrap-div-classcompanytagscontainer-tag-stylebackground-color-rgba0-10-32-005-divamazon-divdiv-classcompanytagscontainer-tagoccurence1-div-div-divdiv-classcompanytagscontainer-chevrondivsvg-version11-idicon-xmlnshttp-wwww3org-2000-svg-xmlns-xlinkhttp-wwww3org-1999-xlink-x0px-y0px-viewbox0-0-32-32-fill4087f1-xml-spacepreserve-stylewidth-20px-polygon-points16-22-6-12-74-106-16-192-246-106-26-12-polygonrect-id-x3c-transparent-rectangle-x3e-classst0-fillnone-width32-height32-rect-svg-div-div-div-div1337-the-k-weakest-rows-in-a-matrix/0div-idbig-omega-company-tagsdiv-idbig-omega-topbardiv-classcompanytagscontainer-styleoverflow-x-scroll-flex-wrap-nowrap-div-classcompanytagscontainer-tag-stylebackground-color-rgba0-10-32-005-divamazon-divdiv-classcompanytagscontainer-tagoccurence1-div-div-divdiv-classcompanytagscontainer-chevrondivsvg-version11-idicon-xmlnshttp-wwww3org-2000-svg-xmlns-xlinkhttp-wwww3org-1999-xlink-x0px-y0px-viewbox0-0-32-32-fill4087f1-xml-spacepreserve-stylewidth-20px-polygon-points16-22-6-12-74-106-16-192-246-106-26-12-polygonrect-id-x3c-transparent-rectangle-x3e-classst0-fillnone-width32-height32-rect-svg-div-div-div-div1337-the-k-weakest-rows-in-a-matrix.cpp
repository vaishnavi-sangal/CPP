class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int row=mat.size();
        int col=mat[0].size();
        vector<pair<int,int>>ans;
        vector<int>a;
        
        for(int i=0;i<row;i++)
        {
            int c=0;
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]==1)
                    c++;
            }
            ans.push_back({c,i});
        }
        sort(ans.begin(),ans.end());
        int i=0;
    while(k){
        k--;
        a.push_back(ans[i++].second);
        
    }
        return a;
        
    }
};