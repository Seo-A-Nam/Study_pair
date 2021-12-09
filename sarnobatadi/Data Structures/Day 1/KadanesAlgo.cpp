/*
Algo - Just avoid negative valuees keep on checking for highest sum greedy approach for returning result 
Based on Kadane's Algo 

*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxEnd = 0;
        int maxSoFar = INT_MIN ;
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            maxEnd = maxEnd + nums[i];
            if(maxSoFar < maxEnd)
            {
                maxSoFar = maxEnd ;
            }
            if(maxEnd < 0)
            {
                maxEnd = 0;
            }
        }
        return maxSoFar;
        
    }
};