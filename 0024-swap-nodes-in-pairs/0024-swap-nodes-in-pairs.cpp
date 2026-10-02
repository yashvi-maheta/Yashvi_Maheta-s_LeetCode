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
    ListNode* swapPairs(ListNode* head) {

        ListNode* p=head;
        ListNode* first=head;
        ListNode* second;
        ListNode* remaining;
        ListNode* PrevPairEnd;
        bool flag=false;

        while(first!=NULL && first->next!=NULL)
        {
            second=first->next;
            remaining=second->next;

            second->next=first;
            first->next=remaining;

            if(!flag)
            {
                head=second;
                flag=true;
            }
            else
            {
                PrevPairEnd->next=second;
            }
            PrevPairEnd=first;
            first=remaining;
            
        }
        return head;
        
    }
};