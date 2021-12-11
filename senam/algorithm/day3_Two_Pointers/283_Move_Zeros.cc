#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size(), count = 0;
        
        for (int i = 0; i < size; i++)
        {
            if (nums[i] != 0)
                nums[count++] = nums[i];
        }
        while (count < size)
            nums[count++] = 0;
        
    }
};
// https://www.geeksforgeeks.org/move-zeroes-end-array/ 
// 이런 방법이...?