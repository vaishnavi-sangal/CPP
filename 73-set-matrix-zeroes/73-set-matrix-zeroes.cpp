class Solution {
public:
   void setZeroes(vector < vector < int >> & matrix) {
       
       vector<pair<int,int>>v;
       for(int i=0;i<matrix.size();i++)
       {
           for(int j=0;j<matrix[0].size();j++)
           {
               if(matrix[i][j]==0)
               {
                   v.push_back({i,j});
               }
           }
       }
       for(auto it:v)
       {
           int row=it.first;
           int column=it.second;
           for(int i=0;i<matrix.size();i++)
           {
               matrix[i][column]=0;
           }
           for(int i=0;i<matrix[0].size();i++)
           {
               matrix[row][i]=0;
           }
       }
   }

};