class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>freq;
        string left="";
        string mid="";
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        for(auto it=freq.begin();it!=freq.end();it++){
           
            if((it->second)%2==1){
              mid=string(1,it->first); 
            }
             int count=(it->second)/2;
            left+=string(count,it->first);
        }
        string right=left;
        reverse(right.begin(),right.end());
        string ans=left+mid+right;
        return ans;

    }
};