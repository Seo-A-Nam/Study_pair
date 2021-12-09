/*
Algorithm - 
1. It is really simple question we just have to make a Set which will contain only unique elements
if size of both is same then we return false else return true


*/




class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        if(nums.size()==s.size()){
            return false;
        }
        return true;
    }
};