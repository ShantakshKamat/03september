#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
    int sum=0;
    int x = 1e9+7;
    int ans;
    long long int product=1;
    switch(q){
        case 1:
            for(int i=1;i<=n;i++)
            {
                sum=sum+i;
            }
            ans=sum;
            break;
        case 2:
            for(int i=1;i<=n;i++)
            {
                product=(product*i)%x;
            }
            ans=product;
            break;     
    }
    return ans;
}
