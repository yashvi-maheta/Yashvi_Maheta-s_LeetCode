class Solution {
public:

    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int count=0;
        int max=0,i=0;
        while(s[i] != '\0')
        {
            if(s[i] == '(')
                st.push(i);
            else
            {
                st.pop();
                if(st.empty())
                    st.push(i);
                else
                {
                    count=i-st.top();
                    max=(max<count?count:max);
                }
            }
            i++;
        }
        return max;
    }

};