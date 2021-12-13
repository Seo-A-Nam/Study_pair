class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n = nums.size() - 1;
        int low  = 0;
        int high = n ;
        int mid;
        while(low<=high)
        {
            mid = (high-low)/2 + low;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                high = mid-1;
                
            }
            else
            {
                low = mid+1;
            }
        }
        if(nums[mid]<target)
        {
             return mid+1;
        }
        else 
        {
            if(mid==0)
            {
                return 0;
            }
            return mid;
        }
       
    }
};