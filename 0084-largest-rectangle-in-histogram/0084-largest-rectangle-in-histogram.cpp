class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans=0;
        int area;
        stack<int> st;
        int n=heights.size();
        int right[n],left[n];

        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            right[i]=st.empty()?n:st.top();
            st.push(i);
        }
        while(!st.empty())
            st.pop();
            
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&& heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            left[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        for(int i=0;i<n;i++)
        {
            int h=heights[i];
            int r=right[i];
            int l=left[i];
            area=h*(r-l-1);
            ans=max(ans,area);
        }
        return ans;
    }
};