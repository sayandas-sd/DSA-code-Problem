class Solution {
    public int mySqrt(int x) {
      //tc--> O(logn)
        if(x==0){
            return 0;
        }
        int s = 1,l = x;
        while(s<=l){
            int mid = s + (l-s)/2;
            if(mid == x/mid){
                return mid;
            }
            else if(mid > x/mid){
                l = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return l;
    }
}
