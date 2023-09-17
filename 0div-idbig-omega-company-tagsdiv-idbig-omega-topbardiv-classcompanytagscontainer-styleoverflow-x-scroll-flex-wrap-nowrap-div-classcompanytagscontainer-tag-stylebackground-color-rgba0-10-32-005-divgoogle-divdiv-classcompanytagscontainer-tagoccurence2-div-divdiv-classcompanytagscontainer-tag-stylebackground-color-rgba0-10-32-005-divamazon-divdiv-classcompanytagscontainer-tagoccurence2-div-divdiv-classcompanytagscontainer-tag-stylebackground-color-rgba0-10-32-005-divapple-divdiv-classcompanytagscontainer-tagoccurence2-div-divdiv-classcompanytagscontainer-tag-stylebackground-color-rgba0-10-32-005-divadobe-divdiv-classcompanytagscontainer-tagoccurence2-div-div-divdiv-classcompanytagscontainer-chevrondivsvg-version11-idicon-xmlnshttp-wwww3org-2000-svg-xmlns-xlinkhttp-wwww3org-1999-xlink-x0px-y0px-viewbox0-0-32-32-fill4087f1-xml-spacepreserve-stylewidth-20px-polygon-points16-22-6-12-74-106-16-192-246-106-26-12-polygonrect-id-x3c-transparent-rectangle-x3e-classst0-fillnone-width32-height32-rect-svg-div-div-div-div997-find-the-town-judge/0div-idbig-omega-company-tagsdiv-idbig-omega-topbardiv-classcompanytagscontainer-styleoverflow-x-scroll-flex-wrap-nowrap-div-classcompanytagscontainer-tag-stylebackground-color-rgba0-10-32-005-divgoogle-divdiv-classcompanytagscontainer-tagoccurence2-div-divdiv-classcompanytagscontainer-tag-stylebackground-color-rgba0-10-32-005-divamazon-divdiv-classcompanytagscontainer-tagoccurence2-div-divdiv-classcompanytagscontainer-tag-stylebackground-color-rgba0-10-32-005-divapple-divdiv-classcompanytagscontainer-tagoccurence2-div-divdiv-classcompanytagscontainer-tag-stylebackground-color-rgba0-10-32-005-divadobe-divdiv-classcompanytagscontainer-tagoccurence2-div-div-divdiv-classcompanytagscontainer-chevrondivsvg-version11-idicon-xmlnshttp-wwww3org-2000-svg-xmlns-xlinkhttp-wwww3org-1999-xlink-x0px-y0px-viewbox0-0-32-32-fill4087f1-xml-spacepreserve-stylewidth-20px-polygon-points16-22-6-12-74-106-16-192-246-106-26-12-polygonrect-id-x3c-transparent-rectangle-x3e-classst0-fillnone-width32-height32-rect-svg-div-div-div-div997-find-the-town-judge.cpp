class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int t=trust.size();
        int ans=-1;
        vector<int>visited(n+1,0);
        for(int i=0;i<trust.size();i++)
        {
            visited[trust[i][0]]--;
            visited[trust[i][1]]++;
        }
        for(int i=1;i<=n;i++)
        {
            int x=visited[i];
            if(x==n-1)
                return i;
        }
        return -1;
    }
};