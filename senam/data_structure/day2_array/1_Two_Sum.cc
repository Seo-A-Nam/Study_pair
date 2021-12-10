#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> ans(2);
        
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (nums[i] == target - nums[j])
                {
                    ans = {i, j};
                    return (ans);
                }
            }
        }
        return (ans);
    }
};