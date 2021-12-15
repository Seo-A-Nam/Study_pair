#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int hash[200] = {0, };
        int size = s.size();
        
        for (int i = 0; i < size; i++)
            hash[s[i]]++;
        for (int i = 0; i < size; i++)
        {
            if (hash[s[i]] == 1)
                return (i);
        }
        return (-1);
    }
};