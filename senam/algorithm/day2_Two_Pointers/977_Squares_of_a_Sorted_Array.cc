#include <cmath>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        int i = 0, j = size - 1, k = size - 1;
        vector<int> ret(nums.size());
        
        while (i <= j)
        {
            if (abs(nums[i]) <= abs(nums[j]))
                ret[k--] = pow(nums[j--], 2);
            else
                ret[k--] = pow(nums[i++], 2);
        }
        return (ret);
    }
};
// use two pointer

// first solved the quesiton with squaring the whole array and sort
// second solved the problem using two pointer (not my code)