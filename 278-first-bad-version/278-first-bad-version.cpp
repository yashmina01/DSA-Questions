// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1,end = n;
        int mid = start + (end-start)/2;
        int ans = 0;
        
        while(start <= end){
           
            mid = start + (end-start)/2;
            
            if(isBadVersion(mid) == true){
                ans = mid;
                end = mid-1;
            }
            else if(isBadVersion(mid) == false){
                start = mid+1;
            }
        }
        return ans;
    }
};