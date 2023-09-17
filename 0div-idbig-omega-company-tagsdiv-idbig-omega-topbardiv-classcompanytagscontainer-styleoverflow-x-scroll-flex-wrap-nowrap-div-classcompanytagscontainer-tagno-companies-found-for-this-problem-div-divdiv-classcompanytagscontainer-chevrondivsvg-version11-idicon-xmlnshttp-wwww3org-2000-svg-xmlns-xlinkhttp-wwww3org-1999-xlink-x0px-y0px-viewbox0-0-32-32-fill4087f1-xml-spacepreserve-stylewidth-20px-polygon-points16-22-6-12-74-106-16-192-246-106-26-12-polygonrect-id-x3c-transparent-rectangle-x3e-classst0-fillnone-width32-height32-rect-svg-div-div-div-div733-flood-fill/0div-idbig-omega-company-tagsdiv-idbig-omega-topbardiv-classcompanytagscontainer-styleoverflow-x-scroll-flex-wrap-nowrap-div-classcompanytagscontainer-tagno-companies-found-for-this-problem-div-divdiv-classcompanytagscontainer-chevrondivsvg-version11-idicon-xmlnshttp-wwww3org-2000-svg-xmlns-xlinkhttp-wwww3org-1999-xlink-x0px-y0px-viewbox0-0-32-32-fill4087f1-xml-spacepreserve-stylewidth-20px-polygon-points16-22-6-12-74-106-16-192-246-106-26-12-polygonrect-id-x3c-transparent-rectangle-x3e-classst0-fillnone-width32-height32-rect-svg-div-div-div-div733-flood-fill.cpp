class Solution {
public:
    void dfs( vector<vector<int>>&ans,vector<vector<int>>& image,vector<vector<int>>&visited,int row,int col,int &color,int &a)
    {
        
         visited[row][col]=1;
          vector<int>dx={-1,+1,0,0};
        vector<int>dy={0,0,-1,1};
        for(int i=0;i<4;i++)
        {
            int newX=row+dx[i];
            int newY=col+dy[i];
           if((newX>=0 && newX<image.size()) && (newY>=0 && newY<image[0].size()) &&(!visited[newX][newY]) && (image[newX][newY]==a) ){
               ans[newX][newY]=color;
             dfs(ans,image,visited,newX,newY,color,a);
            } 
        }
        
              return ;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
     //   vector<vector<int>>ans(row,vector<int>(col,0));
        int row=image.size();
        int col=image[0].size();
         vector<vector<int>>ans(row,vector<int>(col,0));
         for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                ans[i][j]=image[i][j];
            }
        }
        vector<vector<int>>visited(row,vector<int>(col,0));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i==sr && j==sc)
                {
           int a=image[i][j];
                    ans[i][j]=color;
                    dfs(ans,image,visited,i,j,color,a);
                }
            }
        }
        return ans;
    }
};