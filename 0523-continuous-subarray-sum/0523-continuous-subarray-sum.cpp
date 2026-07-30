class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=-1;
        int prefix=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            if(m.find(prefix%k)!=m.end()){
                if(abs(m[prefix%k]-i)>=2){
                    return true;
                }

            }else{
            m[prefix%k]=i;
            }
        }
        return false;
    }
};