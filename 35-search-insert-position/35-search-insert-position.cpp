class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int start = 0,end = nums.size()-1;
        int mid = start + (end-start)/2;
        int ans = 0;
            
        while(start <= end){
         
        mid = start + (end-start)/2;
            
            if(nums[mid] == target){
                ans = mid;
                return ans;
            }
            else if(nums[mid] > target){
                ans = mid;
                end = mid-1;
            }
            else {
            start = mid+1;
        }       
    }
        return end+1;
    }
};