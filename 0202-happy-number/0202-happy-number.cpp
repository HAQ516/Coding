class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        set<int>s;
        while(n>0){
            int d=n%10;
            n/=10;
            sum+=d*d;
            if(n==0){
                if(sum==1){
                    return true;
                }else{
                    if(s.find(sum)==s.end()){
                        s.insert(sum);
                    n=sum;
                    sum=0;
                    
                    }else{
                        return false;
                    }

                }
            }
        }
        return false;
    }
};