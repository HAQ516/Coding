class Solution {
public:
    bool isPowerOfThree(int n) {
        int base=3;
        if(n<=0 || base<2) return false;
        
        while(n%base==0){
        n/=base;
    }
    return n==1;
    }
};