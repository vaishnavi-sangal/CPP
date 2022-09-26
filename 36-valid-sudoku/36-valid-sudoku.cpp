class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        int m = board.size(), n = board[0].size();
        
        for(int i=0; i<m; i++)
        {
            unordered_map<char, int> mapp;  //row check
            for(int j=0; j<n; j++)
            {
                if(mapp[board[i][j]])
                    return false;
                if(board[i][j] != '.')
                    mapp[board[i][j]]++;
            }
        }
        for(int j=0; j<n; j++)
        {
            unordered_map<char, int> mapp; //column check
            for(int i=0; i<m; i++)
            {
                if(mapp[board[i][j]])
                    return false;
                if(board[i][j] != '.')
                    mapp[board[i][j]]++;
            }
        }
        for(int k=0; k<9; k+=3)  //grid check
        {
            unordered_map<char, int> a, b, c; 
          //  for each i: 0->2 , j:0->2, 3->5, 6->8 so make 3 grids then increment i by 3 again make 3 grids
            for(int i=0+k; i<3+k; i++)
            {
                for(int j=0; j<9; j++)
                {
                    if(j<3)
                    {
                        if(a[board[i][j]])
                            return false;
                        if(board[i][j] != '.')
                            a[board[i][j]]++;
                    }
                    else if(j<6)
                    {
                        if(b[board[i][j]])
                            return false;
                        if(board[i][j] != '.')
                            b[board[i][j]]++;
                    }
                    else
                    {
                        if(c[board[i][j]])
                            return false;
                        if(board[i][j] != '.')
                            c[board[i][j]]++;
                    }
                }
            }
        }
        return true;
    }
};