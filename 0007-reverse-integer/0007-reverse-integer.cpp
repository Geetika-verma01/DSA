class Solution {
public:
    int reverse(int n) {
        long rev=0;
        while(n!=0){
            long ld=n%10;
            rev=(rev*10)+ld;
            n=n/10;
        }
        if(rev>INT_MAX ||rev<INT_MIN)
            return 0;
        return rev;
        
    }
};