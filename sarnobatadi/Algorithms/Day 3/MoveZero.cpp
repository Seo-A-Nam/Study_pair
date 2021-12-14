class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = n-1;
        int cnt=0;
        for(int i=0 ; i<n ; i++)
        {
            if(nums[i]==0)
            {
               cnt++;
            }
        }
        j=0;
        for(int i=0 ; i<n ; i++)
        {
            if(nums[i]!=0)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        while(cnt--)
        {
            nums[j] = 0;
            j++;
        }
    }
};