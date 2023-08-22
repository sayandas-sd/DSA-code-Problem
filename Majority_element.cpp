#include <bits/stdc++.h>
using namespace std;

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
//main funtion
int main()
{   
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //code
    
    int v[]= {-2, 1, -3, 4, -1, 2, 1, -5, 4};
   int n = sizeof(v) / sizeof(v[0]);
    cout<<func(v,n);
     
}

