#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[200] = {0, };
        int s1 = s.size();
        int s2 = t.size();
        
        if (s1 != s2)
            return (false);
        for (int i = 0; i < s1; i++)
        {
            hash[s[i]]++;
        }
        for (int i = 0; i < s2; i++)
        {
            if (hash[t[i]] >= 1)
                hash[t[i]]--;
            else
                return (false);
        }
        return (true);
    }
};
// or you can use this method instead : sort both of the string and compare two string
// but sort() is O(nlogn) that my original one(O(n)) could be better in time complexity.