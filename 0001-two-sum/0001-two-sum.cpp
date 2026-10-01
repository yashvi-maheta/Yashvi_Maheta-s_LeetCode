class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        vector<pair<int,int>> arr;
        for(int i=0;i<nums.size();i++)
        {
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        for(int i=0,j=nums.size()-1;i<nums.size()&&j>=0;)
        {
            int sum=arr[i].first+arr[j].first;
            if(sum > target)
            {
                j--;
            }
            else if(sum < target)
            {
                i++;
            }
            else
            {
                result.push_back(arr[i].second);
                result.push_back(arr[j].second);
                return result;
            }
        }
        return result;
    }
};