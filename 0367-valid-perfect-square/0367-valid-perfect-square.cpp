class Solution {
public:
    bool isPerfectSquare(int num) {
        if(floor(pow(num,0.5))==pow(num,0.5)){
            return true;
        }
        return false;
    }
};