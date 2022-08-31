#define pp pair<int , int>
class Solution {
public:
    
    // Intuition -> we are doing traversal for border rows and columns 
    
    // start checking that from coast of pacific , that it is possible to 
    
    // get into pacific only , if current {i,j} is able to go into the respective
    
    // rivers , then check that its neighbours(north ,  south , east , west) is able 
    //to if they are larger than 
    
    // curr_val , and not visited previously 
    
    // Do visit only those which are not visited
    
    // 
    
    void dfs(vector<vector<int>> &grid , int i , int j , int m , int n , vector<vector<bool>> &visited)
    {
        visited[i][j]=true;
        
        // Here we are having the traversal starting from the 4 borders
        
        // Each time , if ith one is going to its respective river
        
        // its neighbouring follows the conditions 
        
        if((i-1)>=0 && visited[i-1][j]==false )
        {
            if(grid[i][j]<=grid[i-1][j])
            {
                dfs(grid , i-1 , j , m , n , visited);
            }
        }
        
        if((i+1)<m && visited[i+1][j]==false)
        {
            if(grid[i][j]<=grid[i+1][j])
            {
                dfs(grid , i+1 , j , m , n , visited);
            }
        }
        
        if((j-1)>=0 && visited[i][j-1]==false)
        {
            if(grid[i][j]<=grid[i][j-1])
            {
                dfs(grid , i , j-1 , m , n , visited);
            }
        }
        
        if((j+1)<n && visited[i][j+1]==false)
        {
            if(grid[i][j]<=grid[i][j+1])
            {
                dfs(grid , i , j+1 , m , n , visited);
            }
        }
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& grid) {
        
        int m=grid.size();
        int n=grid[0].size();
        
        vector<vector<bool>> pacific(m , vector<bool>(n , false));
         vector<vector<bool>> atlantic(m , vector<bool>(n , false));
        
        for(int i=0;i<m;i++)
        {
            dfs(grid , i , 0 , m , n , pacific);
            
            dfs(grid , i , n-1 , m , n , atlantic);
        }
        
        for(int i=0;i<n;i++)
        {
            dfs(grid , 0 , i , m , n , pacific);
            
            dfs(grid , m-1 , i , m , n , atlantic);
        }
        vector<vector<int>> res;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(atlantic[i][j]==true && pacific[i][j]==true)
                {
                    res.push_back({i,j});
                }
            }
        }
        return res;
    }
};