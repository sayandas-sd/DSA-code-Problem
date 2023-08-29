class Solution {
public:
   long long int nCr(int n,int r){
        long long int res = 1;
        for(int c=0; c<r; c++){
            res = res * (n-c);
            res = res / (c+1);
        }
        return res;
    }

    vector<int> getRow(int r) {
        vector<int> ans;
        for(int c = 0; c<=r; c++){
            ans.push_back(nCr(r,c));
        }
        return ans;
    }
};
