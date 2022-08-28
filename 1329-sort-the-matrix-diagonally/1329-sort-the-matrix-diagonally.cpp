


class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int indexi = 0, indexj = 0;
        vector<int> ds;
        
        // Iterating only over 1st row and sorting each diagonal
        for(int j=0; j<cols; j++) {
            indexi = 0, indexj = j;
            ds.clear();
            while(indexi<rows && indexj<cols) ds.push_back(mat[indexi++][indexj++]);
            sort(ds.begin(), ds.end());
            
            indexi = 0, indexj = j;
            while(indexi<rows && indexj<cols) {
                mat[indexi][indexj] = ds[indexi];
                indexi++;
                indexj++;
            }
        }
        
        // Iterating only over 1st column and sorting each diagonal
        for(int i=0; i<rows; i++) {
            indexi = i, indexj = 0;
            ds.clear();
            while(indexi<rows && indexj<cols) ds.push_back(mat[indexi++][indexj++]);
            sort(ds.begin(), ds.end());
            
            indexi = i, indexj = 0;
            while(indexi<rows && indexj<cols) {
                mat[indexi][indexj] = ds[indexj];
                indexi++;
                indexj++;
            }
        }
        return mat;
    }
};