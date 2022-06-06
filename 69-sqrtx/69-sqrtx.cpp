class Solution {
public:
    int mySqrt(int x) {
        
        int start = 0,end = x,ans = 0;
        int mid = start + (end-start)/2;
        
        if(x <= 1) return x;
        
        while(start <= end){
            
            mid = start + (end-start)/2;
            if(mid == 0) return 0;
            
            if(mid == x/mid)
                return mid;
            
            if(mid > x/mid){
                end = mid - 1;
            }
            else if(mid < x/mid){
                ans = mid;
                start = mid + 1;
            }
        }
        return ans;
    }
};