class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int start = 0,end = arr.size()-1;
        int mid = start + (end-start)/2;
        
        while(start < end)   {           //Equal(<=) mhi krenge 
            
            mid = start + (end-start)/2;
        
        if(arr[mid] < arr[mid+1])
            start = mid +1;
        
        else end = mid;                  //end = mid-1 nhi hoga, cuz what if arr[mid] hi Peak ho
        }
        return start;
    }
};