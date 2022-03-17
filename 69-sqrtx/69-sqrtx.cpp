class Solution {
public:
    int mySqrt(int x) {
        
    long long int start=0,end=x,ans=0;
    long long int mid = start + (end-start)/2;

    while(start<=end) {
        mid=start+(end-start)/2;

        if(mid*mid == x)
        return mid;

        if(mid*mid > x) {
            end=mid-1;
        }
        else if(mid*mid < x) {
            ans=mid;
            start=mid+1;
        }
    } 
    return ans;
    }
};