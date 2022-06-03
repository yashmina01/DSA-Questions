class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
    vector<int> ans;
    
        unordered_map<int,int> mp;      //Using Unordered Map
        for(auto no : nums)             //Time Complexity - O(n)
        mp[no]++;                       //Space Complexity O(n);

        for(auto it:mp){
        if(it.second == 2)
        ans.push_back(it.first);

            }
            return ans;
        }
};