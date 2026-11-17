class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res(nums.size(),-1);
        stack<int> st;
        int n=nums.size();
        for(int i=0;i<2*n;i++)
        {
            while(!st.empty() && nums[st.top()]<nums[i%n])
            {
                res[st.top()]=nums[i%n];
                st.pop();
            }
            st.push(i%n);
        }
        return res;
    }
};