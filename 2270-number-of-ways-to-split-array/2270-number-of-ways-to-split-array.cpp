class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ans=0;
        vector<long long>pre(nums.size(),0);
        pre[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i]=pre[i-1]+nums[i];
        }
        long long sum=pre[pre.size()-1];
        for(int i=0;i<pre.size();i++){
           if(pre[i]>=(sum-pre[i]) && i<pre.size()-1){
            ans++;
           }
        }
        return ans;
    }
};