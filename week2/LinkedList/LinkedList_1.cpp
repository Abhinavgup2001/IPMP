class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int i=1;
        while(i<=n){
            temp=temp->next;
            i++;
        }
        if(temp==NULL)
            return head->next;
        ListNode* temp1=head;
        while(temp->next){
            temp=temp->next;
            temp1=temp1->next;
        }
        
        temp1->next=temp1->next->next;
        return head;
        
        
        
    }
};
