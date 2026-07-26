class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums.size();
        int ans=1;
        //Pattern: product of first 3 largest
        int a1=nums[s-1]*nums[s-2]*nums[s-3];
        //Product of first 2 smallers and 1 largest
        int a2=nums[0]*nums[1]*nums[s-1];
        ans=a1>a2?a1:a2;
        return ans;
    }
};