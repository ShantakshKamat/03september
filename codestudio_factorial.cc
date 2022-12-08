    
#include <iostream>
using namespace std;

int main() {
      int n;
      cin>>n;
      if(n>0){
          for(int i=n-1; i>=1; i--)
          {
              n=n*i;
          }
             cout<<n;
      }else if(n<=0){
          cout<<1;
      }    
             

   return 0;
}
