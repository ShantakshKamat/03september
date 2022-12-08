#include <iostream>
using namespace std;

int main() {
      int n;
      cin>>n;
      if(n < 0) {
           cout<<"Error";
       }
       
       else if(n == 0) {
           cout<<1;
       }
       
       else {
           int i = n;
           int fact = 1;
           while(n / i != n) {
               fact = fact * i;
               i--;
           }
           
           cout<<fact;
       }

   return 0;
}
