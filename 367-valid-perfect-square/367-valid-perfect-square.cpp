class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int start = 0,end = num;
        long long int mid = start + (end-start)/2;
        
        while(start <= end){       
           mid = start + (end-start)/2;     
            
           if(mid*mid == num)
                return true;
            
            else if(mid*mid > num)
                end = mid - 1;
            
            else start = mid + 1;
        }
        return false;
        
    }
};