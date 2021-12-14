class Solution {
public:
    bool binarySearch(vector<int> &matrix, int len, int target)
    {
        int s = 0, e = len - 1, mid = 0;
    
        if (e == 0)
        {
            if (matrix[0] == target)
                return (true);
        }
        while (s < e)
        {
            mid = s + (e - s) / 2;
            if (matrix[mid] == target)
                return (true);
            if (matrix[mid] > target)
                s++;
            else
                e--;
        }
        return (false);
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        //cout<<row<<" "<<col<<endl;
        for (int i = 0; i < row; i++)
        {
            if (binarySearch(matrix[i], col, target))
                return (true);
        }
        return (false);
    }
}; // wrong answer - during progress