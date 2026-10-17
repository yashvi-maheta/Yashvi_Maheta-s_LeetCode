/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode* temp = NULL;
        ListNode* p=head;
        temp=p;
        p=p->next;
        while(p!=NULL)
        {
            ListNode* next=p->next;
            if(temp->val==p->val)
            {
                temp->next=p->next;
                p=next;
            }
            else
            {
                temp=p;
                p=next;
            }
        }
        return head;
    }
};