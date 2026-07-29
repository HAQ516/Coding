class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>pre(nums.size(),0);
        vector<int>suff(nums.size(),0);
        pre[0]=nums[0];
        for(int i=1;i<nums.size();i++){
           pre[i]=nums[i]+pre[i-1];
        }
       
        for(int i=nums.size()-1;i>=0;i--){
           
           if(i==(nums.size()-1)){
            suff[i]=nums[i];
           }else{
            suff[i]=nums[i]+suff[i+1];

           }
        }
        for(int i=0;i<nums.size();i++){
            if(pre[i]==suff[i]){
                return i;
            }
        }
        return -1;
    }
};