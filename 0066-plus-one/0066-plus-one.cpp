class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i,carry=0;
        i=digits.size()-1;
        if(digits[i]<9)
        {
            digits[i]=digits[i]+1;
            return digits;
        }
        while(i>=0)
        {
            if(digits[i]==9)
            {
                digits[i]=0;
                carry=1;
            }
            else
            {
                digits[i]=digits[i]+1;
                return digits;
            }
            i--;
        }
        if(carry)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};