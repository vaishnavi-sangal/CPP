class Solution {
public:
  bool isValidSudoku(vector<vector<char>>& board) {
		int r=0,c=0,i=0;
		while(i<9) 
		{
			unordered_map<char,int> mr;
			unordered_map<char,int> mc;
			for(int k=0;k<9;k++)            //FIRST CHECKING ROW IS VALID OR NOT
			{
				if(board[r][k]!='.')
				{
					mr[board[r][k]]++;
					if(mr[board[r][k]]>1)
						return false;
				}
			}
			for(int k=0;k<9;k++)              //THEN CHECKING COLUMN IS VALID OR NOT                   
			{
				if(board[k][c]!='.')
				{
					mc[board[k][c]]++;
					if(mc[board[k][c]]>1)
						return false;
				}
			}
			i++;
			r++;
			c++;
		}
		int count=0;
		r=1;
		c=1;
		for(int i=0;i<9;i++)            //NOW CHEKING BOXES IS VALID OR NOT
		{
			unordered_map<char,int> m1;
			for(int k=-1;k<=1;k++)
			{
				for(int l=-1;l<=1;l++)
				{
					int row=r+k;
					int col=c+l;
					if(board[row][col]!='.')
					{
						m1[board[row][col]]++;
						if(m1[board[row][col]]>1)
							return false;
					}
				}
			}
			count++;
			if(count%3==0)
			{
				r+=3;
				c=1;
			}
			else
				c+=3;
		}
		return true;
	}
};
        