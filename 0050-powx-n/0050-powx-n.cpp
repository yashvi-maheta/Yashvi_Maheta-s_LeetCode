class Solution {
public:
    double myPow(double x, int n) {
        double result=1;
        long long power=n;
        while(abs(power)>0)
        {
            if(abs(power)%2 == 1)
                result*=x;
            x=x*x;
            power=power/2;
        }
        if(n<0)
        {
            result=1/result;
        }
        return result;
    }
};