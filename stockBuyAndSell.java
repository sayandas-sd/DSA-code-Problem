class Solution {
    public int maxProfit(int[] a) {
        int mini = a[0],profit = 0;
        for(int i=1; i<a.length; i++){
            int buy = a[i] - mini;
            profit = Math.max(profit,buy);
            mini = Math.min(mini,a[i]);
        }
        return profit;
    }
    
}
