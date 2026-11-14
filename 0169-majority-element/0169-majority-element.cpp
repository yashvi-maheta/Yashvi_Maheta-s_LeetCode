class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> res;
        res.push_back({nums[0],1});
        
        for(int i=1;i<n;i++)
        {
            bool found=false;
            for(int j=0;j<res.size();j++)
            {
                if(nums[i] == res[j].first)
                {
                    res[j].second++;
                    found=true;
                    break;
                }
            }
            if(!found)
            {
                res.push_back({nums[i],1});
            }
        }

        for(int i=0;i<res.size();i++)
        {
            if(res[i].second>n/2)
                return res[i].first;
        }
        return -1;
    }
};