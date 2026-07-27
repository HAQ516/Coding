class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int smaxi=INT_MIN;
        for(int n:nums){
            if((n-1)>maxi){
                smaxi=maxi;
                maxi=n-1;
            }else if((n-1)>smaxi){
                smaxi=n-1;
            }
        }
        return maxi*smaxi;
    }
};