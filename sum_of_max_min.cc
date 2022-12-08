int sumOfMaxMin(int arr[], int n){
    int min=arr[0];
    int max=arr[0];
       for(int i=0;i<n;i++){

           if(arr[i]>max){
               max=arr[i];
           }
           else
           {
               if(arr[i]<min)
               {
                   min=arr[i];
               }
           }

       }
   int sum=max+min;
   return sum;
    
}
