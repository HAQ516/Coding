class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        vector<int>pre(arr.size(),0);
        pre[0]=arr[0];
        for(int i=1;i<arr.size();i++){
           pre[i]=arr[i]+pre[i-1];
        }
        int num=(pre[pre.size()-1])/3;
        if(pre[pre.size()-1]%3!=0) return false;
        int ans=0;
        bool f1=true,f2=false,f3=false;
        int target=num;
        for(int i=0;i<pre.size();i++){
            if(pre[i]==target && f1){
                ans++;
                f1=false;
                f2=true;
                target=num*2;
            }else if(pre[i]==target && f2){
                ans++;
                f2=false;
                f3=true;
                target=num*3;
            }else if(pre[i]==target && f3 && i==pre.size()-1){
                ans++;
                f3=false;
                target*=3;
            }

        }
        return ans==3;
    }
};