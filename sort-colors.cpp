class Solution {
public:
    void sortColors(vector<int>& a) {
        int n = a.size();
        int start = 0,mid = 0,end = n-1;
        while(mid<=end){
        if(a[mid] == 0){
        swap(a[start],a[mid]);
        start++;
         mid++;
        }
        else if(a[mid]==1){
        mid++;
        }
        else{
        swap(a[mid],a[end]);
        end--;
        }
        }
    }
};
