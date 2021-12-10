#include <vector>
using namespace std;

class Solution {
public:
    void reverse(vector<int> & nums, int start, int end)
    {
        int temp;
        
        while (start < end)
        {
            temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
    
    void rotate(vector<int>& nums, int k) 
    {
        int size = nums.size();
        k %= size;
        reverse(nums, size - k, size - 1);
        reverse(nums, 0, size - k - 1);
        reverse(nums, 0, size - 1);
    }
    
};

// https://1minute-before6pm.tistory.com/38