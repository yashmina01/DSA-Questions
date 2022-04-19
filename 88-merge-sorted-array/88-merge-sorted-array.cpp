class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        int i = 0,j = 0;
        vector<int> ans;
        for(;n > i and m > j;){
            if(nums1[i] > nums2[j]){
                ans.push_back(nums2[j]);
                j++;
            }
            else{
                ans.push_back(nums1[i]);
                i++;
            }
        }
        for(;n > i;i++){
            ans.push_back(nums1[i]);
        }
        for(;m > j;j++){
            ans.push_back(nums2[j]);
        }
        nums1 = ans;
    }
};