class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<points.size();i++)
        {
            int x=points[i][0];
            int y=points[i][1];

            int temp = x*x + y*y ;
            pq.push({temp,i}); // store distance and index of that pair in points 
            if(pq.size()>k) // if size increases the element with farthest dist will be removed
            {
                pq.pop();
            }
        }
        for(int i=0;i<k;i++)
        {
            int index=pq.top().second;      // get the index of resultant pair in og points vector
            res.push_back({points[index][0],points[index][1]});     //push that into result
            pq.pop();        // remove top
        }
        return res;
    }
};