class Solution {
public:
    bool find_word(vector<vector<char>>& board,string& target, int len, vector<pair<int,int>>& dirn,int x, int y)
    {
        char c=board[x][y];
        board[x][y]='#';
        
        
        if(len==target.length())
        {   
            return true;
        }
        
        int i, row=board.size(), col=board[0].size();
        for(i=0;i<4;i++)
        {
            int d_x=dirn[i].first;
            int d_y=dirn[i].second;
            
            if(x+d_x>=0 && x+d_x<row && y+d_y>=0 && y+d_y<col && board[x+d_x][y+d_y]!='#')
            {
                
                if(target[len]==board[x+d_x][y+d_y] && find_word(board, target, len+1, dirn, x+d_x, y+d_y))
                {
                    return true;
                }
            }
            
        }
        
        board[x][y]=c;
        return false;
        
    }
        
    bool exist(vector<vector<char>>& board, string target) {
        string word;
        int i, j, k;
        vector<pair<int, int>> dirn ={{1, 0},{-1, 0},{0, 1},{0, -1}};
        
        for(i=0;i<board.size();i++)
        {
            for(j=0;j<board[0].size();j++)
            {
                if(board[i][j]==target[0] && find_word(board, target, 1, dirn, i, j))
                {
                    return true;
                }
            }
        }
        
        return false;
    }
};