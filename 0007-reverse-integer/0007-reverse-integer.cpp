class Solution {
public:
    int reverse(int x) {
        int num=0;
        int temp=x;
        
        while(temp!=0)
        {

            if(num>INT_MAX/10 || num<INT_MIN/10)
                return 0;

            num=num*10+(temp%10);
            temp=temp/10;
        }

        return num;
    }
};