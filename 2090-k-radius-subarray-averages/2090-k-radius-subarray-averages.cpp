class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int w=k*2+1;
        long long sum=0;
        int index=k,i=0,j=0;
        vector<int>ans(nums.size(),-1);

        if(nums.size()<w){
                return ans;
        }
        while(j<w-1){
            sum+=nums[j];
            j++;
        }
        while(j<nums.size()){
            sum+=nums[j];
            ans[index++]=sum/w;
            j++;
            sum-=nums[i++];
            
        }
        return ans;
    }
};