class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums.size();
        int ans=1;
        int a1=nums[s-1]*nums[s-2]*nums[s-3];
        int a2=nums[0]*nums[1]*nums[s-1];
        ans=a1>a2?a1:a2;
        return ans;
    }
};