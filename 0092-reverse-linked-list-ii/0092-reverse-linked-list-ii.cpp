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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        

        ListNode* dummy=new ListNode(0);
        dummy->next=head;

        ListNode* first;
        ListNode* second;
        ListNode* head2=dummy;
        ListNode* tail2=NULL;
        ListNode *p=head;

        int count=1;

        if(left==right)
            return head;

        while(count<=right && p!=NULL)
        {
            if(count==left-1)
                head2=p;
            else if(count==right)
                tail2=p->next;
            p=p->next;
            count++;
        }

        first=head2->next;
        second=first->next;
        first->next=tail2;
        while(second != tail2)
        {
            ListNode* remaining=second->next;//save
            
            second->next=first;//reverse

            first=second;//move
            second=remaining;//move
        }

        head2->next=first;
        ListNode* newHead=dummy->next;

        return newHead;
    }
};