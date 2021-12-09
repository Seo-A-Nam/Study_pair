#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int prev;
        
        sort(nums.begin(), nums.end());
        prev = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (prev == nums[i])
                return (true);
            else if (prev < nums[i])
                prev = nums[i];
        }
        return (false);
    }
};

/* 
1st try : i tried to solve the question with hashmap(DAT), yet it made a stack overflow or array bound error. 
2nd try : i finished it using searching + comparing codes and it looks kinda similar with selction sort. -> time limit exceeded
3rd try : succeed -> tried 'variable update'
*/