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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        
        ListNode* A=NULL;
        ListNode* B=head;
        ListNode* C=head;
        ListNode* D=head->next;
        int c=1;
        int groupsize;
        
        while(B!=NULL)
        {
            int count=1;
            groupsize=0;
            ListNode* last=NULL;
            ListNode* temp=B;
            while(groupsize < c && temp != NULL)
            {
                C=temp;
                temp=temp->next;
                groupsize++;
            }
            // A=last;
            if(groupsize%2 == 0) // if groupsize < required onw for ex. required = 4  gsize=2 then also it needs to be reversed
            {
                D=temp;

                ListNode* rem;
                ListNode* prev=NULL;
                ListNode* oldB=B;
                // ListNode* first=B;
                // ListNode* second=first->next;

                while(B!=D)
                {
                    rem=B->next;

                    B->next=prev;

                    prev=B;
                    B=rem;
                }
                A->next=prev;
                oldB->next=D;
                A=oldB;
                B=D;
            }
            else
            {
                count=0;
                while(count<groupsize)
                {
                    B=B->next;
                    count++;
                }
                A=C;
            }
            c++;
        }
        return head;
    }
};