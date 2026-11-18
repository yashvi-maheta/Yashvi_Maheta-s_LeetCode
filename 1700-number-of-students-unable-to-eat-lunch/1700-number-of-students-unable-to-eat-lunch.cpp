class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count=0;
        int i=0;
        int n=sandwiches.size();
        
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            q.push(students[i]);
        }
        i=0;
        while(!q.empty()&&count<n)
        {
            if(q.front() == sandwiches[i])
            {
                q.pop();
                count=0;
                i++;
            }
            else
            {
                count++;
                q.push(q.front());
                q.pop();
            }
        }
        return q.size();
    }
};