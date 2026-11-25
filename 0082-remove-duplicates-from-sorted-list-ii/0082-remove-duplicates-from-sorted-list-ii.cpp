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
        ListNode* next1=head->next;
        ListNode* curr=head;
        ListNode dummy(0);
        dummy.next=head;
        ListNode* pre=&dummy;
        bool flag;

        while(curr!=NULL){
            flag=false;
            while(next1!=NULL &&curr->val == next1->val){
                next1=next1->next;
                flag=true;
            }
            if(flag){
                pre->next=next1;
            }else{
                pre=curr;
            }
            
            curr=next1;
            if(curr!=NULL)
                next1=next1->next;
        }
        return dummy.next;
    }
};