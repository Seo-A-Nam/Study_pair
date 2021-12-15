class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //int hash[200] = {0, };
        //int s = 0, e = 0;
        int size1 = s1.size(), size2 = s2.size(), flag = 0;
        
        for (int i = 0; i < size1; i++)
        {
            flag = 0;
            for (int j = i + 1; j < size2; j++)
            {
                if (s1[i] != s2[j])
                    flag = 1;
            }
            if (flag == 0)
                return (true);
        }
        
        for (int i = 0; i < size1; i++)
        {
            flag = 0;
            for (int j = size2 - 1; j >= i + 1; j--)
            {
                if (s1[i] != s2[j])
                    flag = 1;
            }
            if (flag == 0)
                return (true);
        }
        return (false);
    }
}; // still on debugging progress