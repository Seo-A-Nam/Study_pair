
/*
O(n) Solution for merging 2 sorted arrays

*/


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = m-1;
        int j =n-1;
        int finalIndex = n+m-1;
        
        while (j >=0){
            if (i>=0 && nums1[i] > nums2[j]){
                nums1[finalIndex] = nums1[i];
                finalIndex -=1;
                i -=1;
            }
            else{
                nums1[finalIndex] = nums2[j];
                finalIndex -=1;
                j -=1;
            }
        }
        
        
    }
};
