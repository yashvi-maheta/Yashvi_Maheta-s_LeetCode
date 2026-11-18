class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n = size(asteroids);
        for(int i=0;i<n;i++){
            bool alive = true;
            while(alive && asteroids[i] < 0 && !st.empty() && st.top() > 0){
                if(abs(asteroids[i]) > abs(st.top())){
                    st.pop();
                }else if(abs(asteroids[i]) == abs(st.top())){
                    alive = false;
                    st.pop();
                }else{
                    alive = false;
                }
            }
                if(alive) st.push(asteroids[i]);
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};