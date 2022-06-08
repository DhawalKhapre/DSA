class Solution {
public:
    bool isPalindrome(int x) {
        long int digit, num, rev=0;
        if(x<0)
            return false;
        num = x;
        do  {
            digit = num%10;
            rev = (rev*10)+digit;
            num = num/10;
        }while(num!=0);
        if(rev==x)
            return true;
        else
            return false;
    }
};