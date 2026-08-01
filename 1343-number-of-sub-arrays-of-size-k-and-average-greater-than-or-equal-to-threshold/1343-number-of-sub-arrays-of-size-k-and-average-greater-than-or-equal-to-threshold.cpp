class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int t=0;
        int i=0,j=0,sum=0;
        while(j<arr.size()){
                   sum+=arr[j];
                   if(j-i+1<k){
                    j++;
                   }else if(j-i+1==k){
                    sum/k>=threshold?t++:t;
                    sum-=arr[i];
                    i++,j++;
                   }
        }
        return t;
    }
};