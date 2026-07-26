class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sOdd=0,sEven=0;
        int o=1,e=2;
        for(int i=1;i<=n;i++){
            sOdd+=o;
            sEven+=e;
            e+=2;
            o+=2;
        }
        int maxi=sOdd>sEven?sOdd:sEven;
        int mini=sOdd<sEven?sOdd:sEven;
        int a=maxi;
        int b=mini;
        while(b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
};