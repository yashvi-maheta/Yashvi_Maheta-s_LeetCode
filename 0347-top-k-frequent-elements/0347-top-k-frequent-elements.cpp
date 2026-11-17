class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto p:freq)
        {
            pq.push({p.second,p.first});
        }
        for(int i=0;i<k;i++)
        {
            res.push_back({pq.top().second});
            pq.pop();
        }
        return res;
    }
};