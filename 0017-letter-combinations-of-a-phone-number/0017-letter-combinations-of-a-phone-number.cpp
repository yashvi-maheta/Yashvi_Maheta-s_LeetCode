class Solution {
public:
    string res(int d)
    {
        if(d==2)
            return "abc";
        else if(d==3)
            return "def";
        else if(d==4)
            return "ghi";
        else if(d==5)
            return "jkl";
        else if(d==6)
            return "mno";
        else if(d==7)
            return "pqrs";
        else if(d==8)
            return "tuv";
        else if(d==9)
            return "wxyz";
        else 
            return "";
    }
    void helper1(string digits,int i,string &temp,vector<string>& result)
    {
        int k=0;
        if(i==digits.size())
        {
            result.push_back(temp);
            return;
        }
    
        string str=res(digits[i]-'0');
        while(str[k]!='\0')
        {
            temp+=str[k];
            helper1(digits,i+1,temp,result);
            temp.pop_back();
            k++;
        }
    }
    vector<string> letterCombinations(string digits) {
        
        if(digits.empty())
            return {};
        
        string temp="";
        vector<string> result;
        
        int size=digits.size()-1;
        helper1(digits,0,temp,result);
        return result;
    }
};