class Solution {
public:
    string intToRoman(int num) {
        int num2=num;
        int i=0,digit;
        string res="";
        while(num2!=0)
        {
            digit=num2%10;
            string temp="";
            if(i==0)
            {
                if(digit==4)
                    temp="IV";
                else if(digit==9)
                    temp="IX";
                else if(digit<4)
                    temp=string(digit,'I'); //correct = 'I' wrong = "I"
                else if(digit<9)
                    temp="V"+string(digit-5,'I');
            }
            else if(i==1)
            {
                if(digit==4)
                    temp="XL";
                else if(digit==9)
                    temp="XC";
                else if(digit<4)
                    temp=string(digit,'X');
                else if(digit<9)
                    temp="L"+string(digit-5,'X');
            }
            else if(i==2)
            {
                if(digit==4)
                    temp="CD";
                else if(digit==9)
                    temp="CM";
                else if(digit<4)
                    temp=string(digit,'C');
                else if(digit<9)
                    temp="D"+string(digit-5,'C');
            }
            if(i==3)
            {
                temp=string(digit,'M');
            }
            i++;
            res=temp+res;
            num2/=10;
        }
        return res;
    }
};