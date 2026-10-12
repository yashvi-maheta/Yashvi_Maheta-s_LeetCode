class Solution {
public:

    int isdigit(char c)
    {
        if(c>='0' && c <='9')
            return c-48; //return actual digit
        return -1;
    }

    int myAtoi(string s) {
        long long num=0;
        int digit;
        int i=0,sign=1;
        while(s[i] == ' ')
            i++;
        if(s[i] == '-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
            i++;
        while(isdigit(s[i]) != -1)
        {
            digit=isdigit(s[i]);
            num=num*10+digit;

            if(sign == 1 && num>INT_MAX)
                return INT_MAX;
            else if(sign == -1 && num>2147483648LL) // negative number exceeds the minimum int limit, return INT_MIN
                return INT_MIN; 

            i++;   
        }
    
        return (int)(num*sign);

    }
};