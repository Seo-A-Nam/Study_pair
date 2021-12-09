#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size());
        dp[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            dp[i] = max(nums[i], dp[i - 1] + nums[i]);
        }
        return *max_element(dp.begin(), dp.end());
    }
}; 
// https://leetcode.com/problems/maximum-subarray/discuss/1181041/problem-53-c-100-speed-with-explanations
// pretty much difficult.. still i can't understand DP perfectly
// first i tried to make it solved by doulbe loop iteration. or advanced that one in speed, but it didn't work and exceeded time limits.
