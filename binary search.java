class Solution {
    public int search(int[] a, int target) {
        int n = a.length;
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;
        while(s<=e){
            if(a[mid]==target){
                return mid;
            }
            else if(a[mid]<target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return -1;
    }
}
