//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
  // vector<vector<int>>boolo;
    
    void dfs(int i,int j,vector<vector<int>> &boolo,int row,int col,int &ans)
    {
        if((i-1>=0) && i-1<row && (boolo[i-1][j]==1))
        {
            boolo[i-1][j]=0;
            dfs(i-1,j,boolo,row,col,ans);
        }
       if(i+1>=0 && i+1< row &&  (boolo[i+1][j]==1))
        {
            boolo[i+1][j]=0;
            dfs(i+1,j,boolo,row,col,ans);
        }
      if(j-1>=0 &&  j-1<col && (boolo[i][j-1]==1))
        {
            boolo[i][j-1]=0;
            dfs(i,j-1,boolo,row,col,ans);
        }
      if(j+1<col && j+1>=0 && (boolo[i][j+1]==1))
        {
            boolo[i][j+1]=0;
            dfs(i,j+1,boolo,row,col,ans);
        }
         if(j+1<col && j+1>=0 &&  i+1>=0 && i+1<row &&  (boolo[i+1][j+1]==1))
        {
        boolo[i+1][j+1]=0;
            dfs(i+1,j+1,boolo,row,col,ans);
        }
          if(j-1<col && j-1>=0 &&  i-1>=0 && i-1<row &&  (boolo[i-1][j-1]==1))
        {
        boolo[i-1][j-1]=0;
            dfs(i-1,j-1,boolo,row,col,ans);
        }
         if(j-1<col && j-1>=0 &&  i+1>=0 && i+1<row &&  (boolo[i+1][j-1]==1))
        {
        boolo[i+1][j-1]=0;
            dfs(i+1,j-1,boolo,row,col,ans);
        }
         if(j+1<col && j+1>=0 &&  i-1>=0 && i-1<row &&  (boolo[i-1][j+1]==1))
        {
        boolo[i-1][j+1]=0;
            dfs(i-1,j+1,boolo,row,col,ans);
        }
        
        
      //  else
      //  return ;
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<int>>boolo(row,vector<int>(col,0));
        int ans=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                boolo[i][j]=1;
               
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(boolo[i][j]==1)
                {
                    boolo[i][j]=0;
                    ans++;
                    dfs(i,j,boolo,row,col,ans);
                
                }
            }
        }
        return ans;
        
        
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends