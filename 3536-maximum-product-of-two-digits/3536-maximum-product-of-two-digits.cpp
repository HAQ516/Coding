class Solution {
public:
    int maxProduct(int n) {
        vector<int>vec;
        while(n>0){
            vec.push_back(n%10);
            n/=10;
        }
        int maxi1=INT_MIN;
        int maxi2=INT_MIN;
        for(int num:vec){
            if(num>maxi1){
                maxi2=maxi1;
                maxi1=num;
            }else if(num>maxi2){
                maxi2=num;
            }
        }
        return maxi1*maxi2;
    }
};