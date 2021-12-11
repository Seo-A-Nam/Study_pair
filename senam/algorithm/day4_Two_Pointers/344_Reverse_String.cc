#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int temp = 0, left = 0, right = s.size() - 1;
        
        while (left <= right)
        {
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
};
// isn't there another way to solve this problem?