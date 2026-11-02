class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count=s.length();
        int i=0,j=0;
        int count2=0;
        while(t[i]!='\0')
        {
            if(t[i]==s[j])
            {
                j++;
                count2++;
            }
            i++;
        }
        if(count==count2)
            return true;
        return false;
    }
};