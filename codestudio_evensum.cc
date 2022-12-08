#include <bits/stdc++.h> 
long long evenSumTillN(int n) {
    // Write your code here.
    long long int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    return sum;
}
