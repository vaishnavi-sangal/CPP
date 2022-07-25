class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
          int col=matrix[0].size();
    //    vector<vector<int>> matrix1;
      //  int col=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
            swap(matrix[i][j],matrix[j][i]);
            }
        }
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<matrix[i][j];
            }
        }
        int start=0,end=col-1;
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