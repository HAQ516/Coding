class Solution {
public:
    int accountBalanceAfterPurchase(int p) {
        int a,ans;
        if(p%10==0){
            return 100-p;
        }else{
            a=p%10;
            if(a>=5){
                p/=10;
                p+=1;
                p=p*10;
                ans=100-p;
            }else{
               p/=10;
                p=p*10;
                ans=100-p;
            }
        }
        return ans;
    }
};