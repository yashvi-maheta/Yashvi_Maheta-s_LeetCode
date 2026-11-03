class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        int i=1;
        set.insert(nums[0]);
        while(i<nums.size())
        {
            if(set.find(nums[i]) != set.end())
                return true;  // if found duplicate return true otherwise false
            // until not found insert element to set
            set.insert(nums[i]);
            i++;
            
        }
        return false;
    }
};