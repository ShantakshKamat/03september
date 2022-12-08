int lastIndex(int arr[], int n, int x){
   for(int i = n-1; i>=0; i--){
       if(arr[i] == x){
           return i;
       }
   }
   return -1;
}
