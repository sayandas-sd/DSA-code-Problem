class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
         int n = v.size();
        map<int,int> mp;
        mp[0] = 1;
        int sum = 0 , cnt =0;
        for(int i=0;i<n; i++){
            sum += v[i];
            int remv = sum - k;
            cnt += mp[remv];
            mp[sum]+=1;
        }
        return cnt;
      //TC -> O(N*LOGN)
    }
};
