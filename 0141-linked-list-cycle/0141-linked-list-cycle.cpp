/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        vector<ListNode*> res;
        ListNode* tmp=head;
        bool flag=false;
        while(tmp!=NULL)
        { 
            if(res.end() != find(res.begin(),res.end(),tmp))
                return true;
            res.push_back(tmp);
            tmp=tmp->next;
        }
        return false;
    }
};