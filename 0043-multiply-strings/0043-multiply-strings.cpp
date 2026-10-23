class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")
            return "0";

        vector<int> res(num1.length() + num2.length(), 0);
        string result;
        int carry = 0, product;
        int i = num1.length() - 1;
        int j = num2.length() - 1;

        while(j >= 0)
        {
            carry = 0;

            for(i = num1.length() - 1; i >= 0; i--)
            {
                product = (num1[i] - '0') * (num2[j] - '0')
                          + res[i + j + 1] + carry;

                carry = product / 10;
                res[i + j + 1] = product % 10;
            }

            res[j] += carry;
            j--;
        }

        i = 0;
        while(i < res.size() && res[i] == 0)
            i++;

        while(i < res.size())
        {
            result += to_string(res[i]);
            i++;
        }

        return result;
    }
};