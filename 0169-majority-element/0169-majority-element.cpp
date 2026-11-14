class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> res;
        for(int i=0;i<nums.size();i++)
        {
            res[nums[i]]++;
        }
        int n=nums.size();
        for(auto p:res)
        {
            if(p.second>n/2)
                return p.first;
        }
        return -1;
    }
};