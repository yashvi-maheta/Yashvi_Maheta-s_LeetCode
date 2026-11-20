class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int> mp;
        unordered_set<char> seen;
        stack<char> st;
        int n=s.size();
        string res="";
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int i=0;
        while(i<n){
            mp[s[i]]--;
            if(seen.count(s[i])){
                i++;
                continue;
            }
            while(!st.empty() && st.top()>s[i] && mp[st.top()]>0){
                seen.erase(st.top());
                st.pop();
            }
            st.push(s[i]);
            seen.insert(s[i]);
            i++;
        }
        n=st.size();
        for(int i=0;i<n;i++){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};