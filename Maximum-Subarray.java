class Solution {
    public int maxSubArray(int[] a) {
        int n = a.length;
        int sum = 0; int maxi = Integer.MIN_VALUE;
        for(int i=0; i<n; i++){
            sum += a[i];
            if(sum>maxi){
                maxi = sum;
            }
            
            if(sum<0){
            sum = 0;
            }
        }
        
        return maxi;
    }
}
