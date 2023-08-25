class Solution {
public:
    vector<int> rearrangeArray(vector<int>& v) {
        int n = v.size();
        vector<int> posi;
    vector<int> nege;
  
  for(int i=0;i<n;i++){
      
      if(v[i]>0) posi.push_back(v[i]);
      else nege.push_back(v[i]);
  }
  for(int i=0;i<n/2;i++){
      
      v[2*i] = posi[i];
      v[2*i+1] = nege[i];
  }
  
  
  return v;
    }
};
