#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s, e, m; // start, end, middle
        
        s = 0;
        e = nums.size() - 1;
        while (s <= e)
        {
            m = (s + e) / 2;
            if (nums[m] == target)
                return (m);
            if (nums[m] > target)
                e = m - 1;
            else
                s = m + 1;
        }
        return (-1);
    }
};