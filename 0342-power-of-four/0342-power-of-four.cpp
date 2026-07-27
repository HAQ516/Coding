class Solution {
public:
    bool isPowerOfFour(int n) {
        int base=4;
        if(n<=0 || base<2) return false;
        
        while(n%base==0){
        n/=base;
    }
    return n==1;
    }
};