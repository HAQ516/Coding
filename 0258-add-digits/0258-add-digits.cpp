class Solution {
public:
    int addDigits(int num) {
        if(num==0) return 0;
        int n_d=0;
        long long sum=0;
        int ans,d;
        while(num>0){
            d=num%10;
            num/=10;
            n_d++;
            sum+=d;
            if(num==0){
                if(n_d==1){
                 return d;
                }else{
                    num=sum;
                    n_d=0;
                    sum=0;
                }
            }
        }
        return d;
    }
};