class Solution {
public:
    string convertToTitle(int columnNumber) {
        //int num=columnNumber;
        int rem;
        int quotient;
        string res="";
        
        while(columnNumber>0)
        {
            columnNumber--;
            res+='A'+columnNumber%26;
            columnNumber/=26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};