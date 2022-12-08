#include <bits/stdc++.h> 
#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
  
   int x = swapValues.first;
   int y = swapValues.second;
   pair <int,int> p;
   swap(x,y);
   p.first =x;
   p.second=y;
   return p;
}
