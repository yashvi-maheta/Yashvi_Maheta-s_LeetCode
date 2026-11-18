class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans=0;
        int area;
        int h;
        int n=heights.size();
        int left[n],right[n];
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            left[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        while(!st.empty())
        {
            st.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            right[i]=st.empty()?n:st.top();
            st.push(i);
        }
        for(int i=0;i<n;i++)
        {
            h=heights[i];
            int l=left[i];
            int r=right[i];
            area=h*(r-l-1);
            ans=max(ans,area);
        }
        return ans;
    }
};