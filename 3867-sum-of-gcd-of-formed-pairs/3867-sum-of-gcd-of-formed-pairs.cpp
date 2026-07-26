class Solution {
public:
// int gcd(int n1,int n2){
//     int ans=1;
//     int mini=n1<n2?n1:n2;
//     for(int i=1;i<=mini;i++){
//         if(n1%i==0 && n2%i==0){
//             ans=i;
//         }
//     }
//     return ans;
// }
// int maximum(vector<int>vec,int num){
//     int maxi=INT_MIN;
//     for(int n=0;n<=num;n++){
//         if(vec[n]>maxi){
//             maxi=vec[n];
//         }
//     }
//     return maxi;
// }
    long long gcdSum(vector<int>& nums) {
        vector<int>pre(nums.size());
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
              maxi=nums[i]>maxi?nums[i]:maxi;
             pre[i]=gcd(nums[i],maxi);
        }
        sort(pre.begin(),pre.end());
        int i=0,j=pre.size()-1;
        long long ans=0;
        while(i<j){
            int g=gcd(pre[i],pre[j]);
            ans+=g;
            i++,j--;
        }
        return ans;

    }
};