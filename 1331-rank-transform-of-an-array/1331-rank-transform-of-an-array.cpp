class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<pair<int,int>>a;
        for(int i=0;i<arr.size();i++){
          a.push_back(make_pair(arr[i],i));
        }
        sort(a.begin(),a.end(),
        [](pair<int,int>p1,pair<int,int>p2){
            return p1.first<p2.first;
        }
        
        );
        set<int>s;
        int ans=0;
        vector<int>rank(arr.size());
        for(int i=0;i<a.size();i++){
          if(s.find(a[i].first)==s.end()){
          rank[a[i].second]=ans+1;
          ans++;
          s.insert(a[i].first);
          }else{
           rank[a[i].second]=ans;
          }
        }
        return rank;
    }
};