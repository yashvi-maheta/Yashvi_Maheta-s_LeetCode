class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++)
        {
            pq.push(stones[i]);
        }

        if(pq.size()==1)
            return pq.top();

        while(pq.size()>1)
        {
            int x,y;

            y=pq.top();
            pq.pop();//largest

            x=pq.top();
            pq.pop();//second largest

            if(x!=y)
                pq.push(y-x);
            
        }
        if(pq.size()==1)
            return pq.top();
        else
            return 0;
    }
};