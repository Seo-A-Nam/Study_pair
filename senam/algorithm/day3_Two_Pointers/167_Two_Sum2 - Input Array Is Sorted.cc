#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> index(2);
        int size = numbers.size(), sum = 0, s = 0, e = size - 1;
        
        while (s < e)
        {
            sum = numbers[s] + numbers[e];
            if (sum == target)
            {
                index = {s + 1, e + 1};
                return (index);
            }
            else if (sum > target)
                e--;
            else
                s++;
        }
        index = {1, 2}; // bc, test has exactly one solution
        return (index);
    }
}; // https://medium.com/data-science-for-kindergarten/leetcode-167-two-sum-ii-input-array-is-sorted-45877fb6219
// need more study.