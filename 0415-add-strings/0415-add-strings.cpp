class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int c=0;
        if(num1.size()>=num2.size()){
           while(num1.size()!=num2.size()){
            num2="0"+num2;
           }
        }else{
            while(num1.size()!=num2.size()){
            num1="0"+num1;
           }
        }
int h;
        for(int i=num1.size()-1;i>=0;i--){
            int a=c+(num1[i]-'0')+(num2[i]-'0');
            if(a>9){
                 h=a%10;
                c=a/10;
                ans=to_string(h)+ans;
            }else{
                ans=to_string(a)+ans;
                c=0;
            }
        }
        if(c!=0){
            ans=to_string(c)+ans;
        }
        return ans;
    }
};