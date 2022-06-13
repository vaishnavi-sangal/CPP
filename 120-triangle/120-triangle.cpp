class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       // int sum=0;
        int n=triangle.size();
  //     int dp[n];
        vector<int>dp(n,0);
        for(int j=0;j<n;j++)
        {
            
            dp[j]=triangle[n-1][j];// dp storing the last row elements
        }
        
        for(int j=n-2;j>=0;j--)
        {
            for(int i=0;i<triangle[j].size();i++)
            {
            dp[i]=min(dp[i],dp[i+1])+triangle[j][i];
            }
        }
        return dp[0];
        
    }
};