class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0;
        int ans=INT_MIN;
        int t=0;
        while(j<s.size()){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                t++;
            }
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                ans=max(ans,t);
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                    t--;
                }
                i++,j++;
            }
        }
        return ans;
    }
};