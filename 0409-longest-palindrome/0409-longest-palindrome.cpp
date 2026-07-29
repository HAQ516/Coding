class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1) return s.size();
        map<char,int>m;
        int ans=0;
        for(char c:s){
            m[c]++;
        }
        if(m.size()==1) return s.size();
        int odds=0;
        for(auto it:m){
            if((it.second)%2==1){
                (it.second--);
                odds++;
            }
            ans+=it.second;
        }
       
        return odds>=1?++ans:ans;
    }
};