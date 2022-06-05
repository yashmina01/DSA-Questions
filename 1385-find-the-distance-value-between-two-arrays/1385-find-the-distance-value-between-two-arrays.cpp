class Solution {
public:
    
    bool isValid(vector<int> arr2 , int target , int d){
        
        int start = 0, end = arr2.size()-1;
        int mid = start + (end-start);
        
        while(start <= end){
            
            mid = start + (end-start)/2;
            
            if(abs(arr2[mid] - target) <= d){
                return false;
            }
            
            else if(arr2[mid] < target){
                start = mid + 1;
            }
            else end = mid - 1;
    }
        return true;
    }
    
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        sort(arr2.begin() , arr2.end());
        
        int count = 0;
        for(auto num : arr1){
            if( (isValid(arr2 , num , d)) ){
                count++;
            }
        }
        return count;
    }
};