class Solution {
public:
   // int countBattleships(vector<vector<char>>& board) {
      int countBattleships(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        
        int ans = 0;
        if(board[0][0] == 'X')ans++;
        
        for(int i=1;i<m;i++){
            if(board[0][i] == 'X' and board[0][i-1] != 'X')ans++;
        }
        
        for(int i=1;i<n;i++){
            if(board[i][0] == 'X' and board[i-1][0] != 'X')ans++;
        }
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(board[i][j] == 'X'){
                    if(board[i][j-1] != 'X' and board[i-1][j] != 'X')ans++;
                }        
            }
        }    
        
        return ans;
        
    }
};