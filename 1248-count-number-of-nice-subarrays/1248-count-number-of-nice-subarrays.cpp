class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans=0;
        int prefix=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int n:nums){
            if(n%2==0){
                prefix+=0;
            }else{
                prefix+=1;
            }
            int need=prefix-k;
            if(m.find(need)!=m.end()){
                ans+=m[need];
            }
            m[prefix]++;
        }
        return ans;
    }
};