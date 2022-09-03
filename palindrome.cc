class Solution {
public:
    bool isPalindrome(int x) {
        long long int num=x;
        long long int rev=0;
        int rem=0;
        while(x>0){
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        
        if(num==rev){
            return true;
        }
        else{
            return false;
        }
              
    }
};
