#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, m, e = nums.size() - 1; // start, middle, end point
        
        if (target <= nums[0])
            return (0);
        while (s <= e)
        {
            m = (s + e) / 2;
            if (nums[m] == target)
                return (m);
            else if (nums[m] < target)
                s = m + 1;
            else
                e = m - 1;            
        }
        if (s > e)  return (e + 1); // ?
        return (-1);
    }
};
// didn't understand perfectly ...