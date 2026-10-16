class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int k=0;
        int carry=0;
        string res;
        int sum;
        int d1,d2;
        while(i>=0 || j>=0)
        {
            d1=0;
            d2=0;
            if(i>=0)
                d1=a[i]-'0';
            if(j>=0)
                d2=b[j]-'0';
            sum=d1+d2+carry;
            res.push_back((sum%2)+'0');
            carry=sum/2;
            i--;
            j--;
            
        }
        if(carry==1)
            res.push_back('1');
        reverse(res.begin(),res.end());
        return res;
    }
};