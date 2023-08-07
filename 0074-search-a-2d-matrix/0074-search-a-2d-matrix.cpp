class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans=false;
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0,j=col-1,k=0;
        while(i<row && j>=0)
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
          else  if(matrix[i][j]>target)
            {
                j--;
            }
            
                
            else
            {
                i++;
            }
        }
        return false;
        
    }
};