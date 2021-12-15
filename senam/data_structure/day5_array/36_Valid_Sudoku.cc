#include <vector>
using namespace std;

class Solution {
public :
    bool isValidSudoku(vector<vector<char>>& board) {
        int hash[100];
        int row = board.size();
        int col = board[0].size();
        
        if (row != 9 || col != 9)
            return (false);
        
        for (int i = 0; i < row; i++)
        {
            memset(&hash, 0, sizeof(hash));
            for (int j = 0; j < col; j++)
            {
                if (!((board[i][j] >= '1' && board[i][j] <= '9') || board[i][j] == '.'))
                    return (false); 
                if (hash[board[i][j]] == 1)
                    return (false);
                if (board[i][j] != '.') hash[board[i][j]]++;
            }
        } // check duplication on row
        for (int i = 0; i < col; i++)
        {
            memset(&hash, 0, sizeof(hash));
            for (int j = 0; j < row; j++)
            {
                if (!((board[j][i] >= '1' && board[j][i] <= '9') || board[j][i] == '.'))
                    return (false); 
                if (hash[board[j][i]] == 1)
                    return (false);
                if (board[j][i] != '.') hash[board[j][i]]++;
            }
        } // check duplication on column
        for (int g = 0; g < 3; g++)
        {
            for (int k = 0; k < 3; k++)
            {
                memset(&hash, 0, sizeof(hash));
                for (int i = g * 3; i < 3 + g * 3; i++)
                {   
                    for (int j = k * 3; j < 3 + k * 3 ; j++)
                    {
                        if (!((board[i][j] >= '1' && board[i][j] <= '9') || board[i][j] == '.'))
                            return (false); 
                        if (hash[board[i][j]] == 1)
                            return (false);
                        if (board[i][j] != '.') hash[board[i][j]]++;
                    }
                }
            }
        } // check duplication of number in 3x3 subBoxes
        return (true);
    }
};