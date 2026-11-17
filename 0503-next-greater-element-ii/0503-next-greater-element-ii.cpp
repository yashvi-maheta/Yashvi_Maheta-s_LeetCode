class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res(nums.size(),-1);
        stack<int> st;
        int n=nums.size();
        for(int i=0;i<2*n;i++)
        {
            while(!st.empty() && nums[st.top()]<nums[i%n]) // to cjeck after the last element again from 0th element
            {
                res[st.top()]=nums[i%n];
                st.pop();
            }
            if(i<n) //push indices only once as loop is going to traverse twice we dont need to add index twice 
                st.push(i);
        }
        return res;
    }
};