class Solution {
public:

    bool isOpening(char c)
    {
        return c == '(' || c == '{' || c== '[';
    }

    int getId(char c)
    {
        if(c== '('||c==')')
            return 1;
        else if(c == '{'||c=='}')
            return 2;
        else if(c=='['||c==']')
            return 3;
        else 
            return -1;
    }

    bool isValid(string s) {
        int i=0,k=-1;
        string opening;
        while(s[i]!= '\0')
        {
            if(isOpening(s[i]))
            {
                opening.push_back(s[i]);
                i++;
            }
            else
            {
                if(opening.empty())
                    return false;
                if(getId(s[i]) == getId(opening.back()))
                {
                    opening.pop_back();
                    i++;
                }
                else{
                    return false;
                }
            }
            
        }
        if(opening.empty()) //opening string is empty or not
            return true;
        else
            return false;
    }
};