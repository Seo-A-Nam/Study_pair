class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
            int n = nums.size();
            if ((n == 0) || (k <= 0))
            {
                return;
            }
            
    
            vector<int> copy(n);
            for (int i = 0; i < n; i++)
            {
                copy[i] = nums[i];
            }
            
            
            for (int i = 0; i < n; i++)
            {
                nums[(i + k)%n] = copy[i];
            }
    }
};