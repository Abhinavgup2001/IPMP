class Solution {
public:
    ListNode *deleteAlternate(ListNode *head) {
    	if(head==NULL||head->next==NULL)
    	return head;
    	ListNode* temp1=head;
    	ListNode* del=head->next
    	while(temp1&&del){
    		temp1->next=del->next;
    		delete(del);
    		temp1=temp1->next;
    		if(temp1!=NULL)
    		del=temp1->next;
		}
    	
    	return head;
    }
}
