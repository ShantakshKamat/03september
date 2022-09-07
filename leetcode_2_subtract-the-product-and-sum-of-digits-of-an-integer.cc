class Solution {
public:
    int subtractProductAndSum(int n) {
       
        int sum=0;
        int prod=1;
        
        while(n!=0){
            int dig=n%10;
            sum=sum+dig;
            prod=prod*dig;
            
            n=n/10;
        }
            int result=(prod-sum);
            return result;
    }
};
