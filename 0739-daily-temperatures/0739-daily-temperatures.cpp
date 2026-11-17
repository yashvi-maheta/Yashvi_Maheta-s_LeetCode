class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(),0);
        stack<int> st;
        for(int i=0;i<temperatures.size();i++)
        {
            while(!st.empty() && temperatures[st.top()]<temperatures[i])
            {
                res[st.top()]=i-st.top();  // to store diff between indices to get the days to wait for warmer temp 
                                          //(i.e. current temp at which index and the day with whom we are checking)
                st.pop(); 
                
            }
            st.push(i);
        }
        return res;
    }
};