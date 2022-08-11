class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        int digit;
        long int result = 0;
        
        do{
            digit = x % 10;
            result = (result * 10) + digit;
            x = x/10;
        }while(x != 0);
       
        
        if(n < 0)
            return false;
        else if(result == n)
            return true;
        else 
            return false;
    }
};