class Solution {
public:
    string helper1(string h)
    {
        string temp="";
        int i=0,k,count;
        while(h[i] != '\0')
        {
            k=0;
            count=0;
           
            while(h[i+k]!='\0' && h[i] == h[i+k])
            {
                count++;
                k++;
            }
            temp+=to_string(count);
            temp+=h[i];
            i=i+k;
            
            
        }
        return temp;
    }
    string countAndSay(int n) {
        string res="1";
        if(n==1)
        {
            return "1";
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                res=helper1(res);
            }
        }
        return res;
    }
};