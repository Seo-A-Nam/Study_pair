class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,j=0;
        char tmp;
        int n = s.size();
        j = n-1;
        while(i<j)
        {
            tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            i++;
            j--;
        }
        
        
    }
};