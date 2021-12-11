#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> Row(numRows);
        int num = 0;
        
        Row[0].push_back(1);
        for (int i = 1; i < numRows; i++)
        {
            Row[i].push_back(1);
            for (int j = 1; j < i; j++)
            {
                num = Row[i - 1][j - 1] + Row[i - 1][j];
                Row[i].push_back(num);
            }
            Row[i].push_back(1);
        }
        return (Row);
    }
};