class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row=matrix.size();
        int col=matrix[0].size();
        int a=0,b=col-1;
        
        while(a<row && b>=0)
        {
         //   int mid=(a+b)/2;
            if(matrix[a][b]==target)
            {
                return true;
            }
            else if(matrix[a][b]>target)
            {
             //   a++;
                b--;
            }
            else
            {
                a++;
            }
          
        }
        return false;
        
    }
};