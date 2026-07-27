class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int>v(nums.size(),0);
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            v[i]=v[i-1]+nums[i];
        }
        int mini=INT_MAX;
        for(int i=0;i<v.size();i++){
            if(v[i]<mini){
                mini=v[i];
            }
        }
        return mini<0?((-1)*mini)+1:1;
    }
};