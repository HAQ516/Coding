class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int prefix=0;
        int ans=INT_MIN;
        unordered_map<int,int>m;
        m[0]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                prefix+=-1;
            }else{
                prefix+=1;
            }
            if(m.find(prefix)!=m.end()){
               ans=max(ans,abs(m[prefix]-i));
            }else{
                m[prefix]=i;
            }

        }
        return ans==INT_MIN?0:ans;
    }
};