#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash1[200] = {0, };
        int hash2[200] = {0, };
        int s1 = ransomNote.size();
        int s2 = magazine.size();
        
        if (s1 > s2)
            return (false);
        for (int i = 0; i < s1; i++)
        {
            hash1[ransomNote[i]]++;
        }
        for (int i = 0; i < s2; i++)
        {
            hash2[magazine[i]]++;
        }
        for (int i = 0; i < 200; i++)
        {
            if (hash1[i] > hash2[i])
                return (false);
        }
        return (true);
    }
};
// can't i just use 1 hash table to improve space complexity?