class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int prefix=0;
        unordered_map<int,int>m;
        m[0]=1;
        int ans=0;
        for(int n:nums){
            prefix+=n;
            int need=prefix-goal;
           
            if(m.find(need)!=m.end()){
                ans+=m[need];
            }
            m[prefix]++;
        }
        return ans;
    }
};