class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==num.size())
            return "0";

        stack<char> st;
        int i=0;
        string res="";
        int count=0;
    
        while(i<num.size())
        {
            while(!st.empty() && count<k && st.top()>num[i]){
                st.pop(); 
                count++;
            }
            st.push(num[i]);
            i++;
        }
        while(count<k)
        {
            st.pop();
            count++;
        }
        
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        int j=0;
        while(j+1<res.size() && res[j]=='0')
            j++;

        res=res.substr(j);
        return res;
    }
};