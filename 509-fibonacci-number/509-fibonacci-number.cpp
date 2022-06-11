class Solution {
public:
    int fib(int n) {
        
    int first = 0,second = 1;
    int next;

    for(int i=0;i<n;i++){
        next = first + second;
        first = second;
        second = next;
    }
    return first;
    }
};