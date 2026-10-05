class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum1=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++)
        {
            int left=i+1;
            int right=nums.size()-1;
            
            while(left<right)
            {
                int sum2=nums[i]+nums[left]+nums[right];
                if(abs(sum1-target) > abs(sum2-target))
                {
                    sum1=sum2;
                }
                else if(sum2<target)    
                    left++;
                else if(sum2>target)
                    right--;
                else 
                    return sum2;
            }
        }
        return sum1;
    }
};