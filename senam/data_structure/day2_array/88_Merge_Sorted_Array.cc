#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans(m + n);
        int a = 0, b = 0, k = 0;
        
        while (k < m + n)
        {
            if (a == m || b == n)
                break;
            if (nums1[a] < nums2[b])
                ans[k++] = nums1[a++];
            else
                ans[k++] = nums2[b++];
        }
        while (a < m)
            ans[k++] = nums1[a++];
        while (b < n)
            ans[k++] = nums2[b++];
        copy(ans.begin(), ans.end(), nums1.begin());
    }
};