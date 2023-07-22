class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
          int m=matrix[0].size();
    //    vector<vector<int>> matrix1;
      //  int col=matrix[0].size();//
  /*    1 4 7
      2 5 8
      3 6 9*/
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<i;j++)
           {
               swap(matrix[i][j],matrix[j][i]);
           }
       }



      int start=0,end=m-1;
        while(start<end)
        {
            for(int i=0;i<n;i++)
            {
            swap(matrix[i][start],matrix[i][end]);
                
            }
            start++;
            end--;
            
        }
        
    }
};