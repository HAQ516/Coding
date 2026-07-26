class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int n:nums){
            if(n>maxi){
                maxi=n;
            }
            if(n<mini){
                mini=n;
            }
        }
        //GCD logic
        int ans=1;
        for(int i=1;i<=mini;i++){
            if(maxi%i==0 && mini%i==0){
                ans=i;
            }
        }
        return ans;
    }
};