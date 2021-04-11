class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       
        ListNode* prev=NULL;
         ListNode* n=NULL;
         ListNode* current=head;
        while(current)
        {
            n=current->next;
            current->next=prev;
            prev=current;
            current=n;
        }
        return prev;
    }
};
