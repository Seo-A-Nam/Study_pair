#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> hash(2, vector<int> (1000, 0));
        vector<int> ans;
        int max = 0;
        int size1 = nums1.size(), size2 = nums2.size();
        
        for(int i = 0; i < size1; i++)
        {
            if (nums1[i] > max)
                max = nums1[i];
            hash[0][nums1[i]]++;
        }
        for(int i = 0; i < size2; i++)
        {
            if (nums2[i] > max)
                max = nums2[i];
            hash[1][nums2[i]]++;
        }
        for(int i = 0; i <= max; i++)
        {
            if (hash[0][i] != 0 && hash[1][i] != 0)
            {
                for (int j = 0; j < min(hash[0][i], hash[1][i]); j++)
                    ans.push_back(i);
            }
        }
        return (ans);
    }
}; // using hashtable