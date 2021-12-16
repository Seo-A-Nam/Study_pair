#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[200] = {0, };
        int size = s.size(), start = 0, end = 0, max = -1, len = 0;
        
        if (size == 0)
            return (0);
        while (end < size)
        {
            if (hash[s[end]] == 1)
            {
                len = end - start;
                if (len > max)
                    max = len;
                memset(&hash, 0, sizeof(hash));
                start++;
                end = start;
            }
            else
                hash[s[end++]]++;
        }
        len = end - start;
        if (len > max)
            max = len;
        return (max);
    }
};