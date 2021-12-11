#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> result(r, vector<int> (c, 0));
        int index = 0;
        int m = mat.size(); // row of the original matrix
        int n = mat[0].size(); // column of the original matrix
        
        if (m*n != r*c)
            return (mat);
        
        vector<int> linear(m * n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                linear[index++] = mat[i][j];
            }
        }
        index = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                result[i][j] = linear[index++];
            }
        }
        return (result);
    }
};

// Still Can be improved : apply this ->
// result[i / c][i % c] = mat[i / n][i % n] (단, i는 0 <= i < r * c 범위를 갖는다.)
// https://steady-coding.tistory.com/498