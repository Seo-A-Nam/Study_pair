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
            for (int j = 0; j < col; j++)
            {
                cout<<board[i][j] <<" ";   
            }
            cout<<endl;
        }
        
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
        }
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
        }
        return (true);
    }
};
// 3x3 박스 안에 겹치는 숫자 없는 지 체크하는 거 추가해야함.
// wrong answer : during progress