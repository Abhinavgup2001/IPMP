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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)
            return head;
    
  int n=0;
        ListNode* temp=head;
        while(temp->next){
            n++;
            temp=temp->next;
        }
        n=n+1;
        k=k%n;
        if(k==0)
            return head;
        ListNode* last=temp;
        last->next=head;
         int count=n-k;
        temp=head;
        for(int i=1;i<count;i++){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
       return head;
        
    }
};
