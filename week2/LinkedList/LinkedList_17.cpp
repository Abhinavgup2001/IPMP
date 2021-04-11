class Solution {
public:
    ListNode* sort012(ListNode* head) {
    	Listnode* temp=head;
    	int count[3]={0,0,0};
    	while(temp){
    		if(temp->value==0)
    		count[0]++;
    		if(temp->value==1)
    		count[1]++;
    		if(temp->value==2)
    		count[2]++;
    		
    		temp=temp->next;
		}
		
		temp=head;
		int i=0
		while(temp){
			if(count[i]==0)
			i=i+1;
			else{
				temp->value=i;
				temp=temp->next;
				count[i]--;
			}
			
		}
		return head;
    }
