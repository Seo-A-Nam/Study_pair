#include <vector>
using namespace std;

class Solution {
public:
    bool binarySearch(vector<int> &matrix, int len, int target)
    {
        int s = 0, e = len - 1, mid = 0;
        
        if (target < matrix[0] || target > matrix[e])
            return (false);
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (matrix[mid] == target)
                return (true);
            if (matrix[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }
        return (false);
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        for (int i = 0; i < row; i++)
        {
            if (binarySearch(matrix[i], col, target))
                return (true);
        }
        return (false);
    }
};