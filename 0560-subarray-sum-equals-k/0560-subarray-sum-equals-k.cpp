class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int prefix=0;
        int ans=0;
        for(int n:nums){
            prefix+=n;
            int need=prefix-k;
            if(m.find(need)!=m.end()){
             ans+=m[need];
            }
            m[prefix]++;
        }
        return ans;
    }
};