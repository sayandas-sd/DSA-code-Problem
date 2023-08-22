
int func(int v[],int n){
        int sum = 0; int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            sum += v[i];
            if(sum>maxi){
                maxi = sum;
            }
            if(sum<0){
            sum = 0;
            }
        }
        return maxi;
}



