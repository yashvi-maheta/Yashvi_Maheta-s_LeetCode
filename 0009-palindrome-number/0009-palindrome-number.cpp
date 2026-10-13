class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x!=0 && x%10 == 0))
            return false;
        int num=x;
        int digit=0,newnum=0;
        while(num>newnum)
        {
            digit=num%10;
            newnum=newnum*10+digit;
            num/=10;
        }
        if(newnum == num || newnum/10 == num)
            return true;
        else
            return false;
    }
};