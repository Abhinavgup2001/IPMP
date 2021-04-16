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

ListNode* getMid(ListNode* head){
    ListNode* temp=head;
    ListNode* fast=head;
    ListNode* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        temp=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    temp->next=NULL;
    return slow;
}
ListNode* merge(ListNode* l1, ListNode* l2){
    ListNode* dummy= new ListNode(0);
    ListNode* curr=dummy;
    while(l1 && l2){
        if(l1->val>l2->val){
           curr->next=l2;
            curr=curr->next;
            l2=l2->next;
        }
        else{
            curr->next=l1;
            curr=curr->next;
            l1=l1->next;
        }
    }
    if(l1==NULL)
        curr->next=l2;
    else
        curr->next=l1;
    return dummy->next;
}


class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
   ListNode* mid=getMid(head);
        ListNode* lh= sortList(head);
        ListNode* rh=sortList(mid);
        return merge(lh,rh);
        
    }
};
