class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else if(n==2)
            return 2;

        int prev=1;
        int curr=2;
        int next;
        for(int i=3;i<=n;i++)
        {
            next=prev+curr;
            prev=curr;
            curr=next;
        }
        return curr;
    }
};