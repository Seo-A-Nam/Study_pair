#include <iostream>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i = 0, temp = 0, start = 0, end = 0;
        int p = 0, q = 0;
        
        while (isspace(s[i]) && s[i])
            i++;
        start = i;
        while (s[i])
        {
            while (!isspace(s[i]) && s[i])
                i++;
            end = i - 1;
            p = start;
            q = end;
            while (p <= q)
            {
                temp = s[p];
                s[p] = s[q];
                s[q] = temp;
                p++;
                q--;
            }
            while (isspace(s[i]) && s[i])
                i++;
            start = i;
        }
        return (s);
    }
};
// how can i improve this code more optimal?