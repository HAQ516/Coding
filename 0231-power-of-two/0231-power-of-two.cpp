class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        double r=log2(n);
        if(floor(r)==r){
            return true;
        }
        return false;
    }
};