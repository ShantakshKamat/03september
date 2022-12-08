#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
sort(arr.begin(), arr.end());
   int ans=0;
   for(int i=0;i<n;i++){
       if(arr[i]==arr[i+1]){
           ans=arr[i];
       }
   }
   return ans;
}
