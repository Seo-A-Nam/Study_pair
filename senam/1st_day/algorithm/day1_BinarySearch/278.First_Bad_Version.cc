// The API isBadVersion is defined for you.
// bool isBadVersion(int version)

class Solution {
public:
    int firstBadVersion(int n) {
        int left, mid, right;
        
        left = 1; // ?
        right = n; // ?
        while (left <= right)
        {
            if (isBadVersion(mid) == true)
            {
                if (mid >= 1 && isBadVersion(mid - 1) == false)
                    return (mid);
                right = mid - 1;
            }
            else
                left = mid + 1;
            mid = left + (right - left) / 2; // ?
        }
        return (left);
    }
};

/*
Input: n = 5, bad = 4
Output: 4
Explanation:
call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true
Then 4 is the first bad version.

1 <= bad <= n <= 231 - 1
*/
