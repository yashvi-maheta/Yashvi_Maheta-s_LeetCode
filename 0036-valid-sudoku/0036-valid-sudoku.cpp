
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Row and column wise checking
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j] == '.')
                    continue;

                for(int k=0; k<9; k++)
                {
                    if(j != k && board[i][j] == board[i][k])
                        return false;

                    if(i != k && board[i][j] == board[k][j])
                        return false;
                }
            }
        }

        for(int row=0;row<9;row+=3)
        {
            for(int col=0;col<9; col+=3)
            {
                for(int a=row;a<row+3;a++)
                {
                    for(int b=col;b<col+3;b++)
                    {
                        if(board[a][b] == '.')
                            continue;

                        for(int x=row;x<row+3;x++)
                        {
                            for(int y=col;y<col+3; y++)
                            {
                                if(x == a && y == b)
                                    continue;

                                if(board[x][y] != '.' &&
                                   board[a][b] == board[x][y])
                                    return false;
                            }
                        }
                    }
                }
            }
        }

        return true;
    }
};
