class Solution {
public:

    int nthUglyNumber(int n) {
        set<long long>v;
        v.insert(1);
        int count=0;
       int ans;
        while(count<n){
             auto it=v.begin();
            long long c=*it;
            ans=c;
            v.erase(v.begin());
            v.insert(c*2);
            v.insert(c*3);
            v.insert(c*5);
            count++;
    }
    return ans;
    }
};