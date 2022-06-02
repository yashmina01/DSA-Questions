class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
    for(int i=1;i<nums.size();i++)
        nums[i]+=nums[i-1];         //Taking Prefix Sum
        
        return nums;
    }
};