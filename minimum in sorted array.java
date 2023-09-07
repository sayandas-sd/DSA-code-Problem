class Solution {
    public int findMin(int[] a) {
        int n = a.length;
        int low = 0,high = n-1;
        int mini = Integer.MAX_VALUE;

            while(low<=high){
            int mid = low + (high-low)/2;
            if(a[low]<=a[high]){
                mini = Math.min(a[low],mini);
                break;
            }
            else if(a[low]<=a[mid]){
                mini = Math.min(mini,a[low]);
                low = mid + 1;
            }
            else{
                mini = Math.min(mini,a[mid]);
                high = mid - 1;
            }
        }
        return mini;
    }
}
