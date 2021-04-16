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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL;
        ListNode* tail=NULL;
        int sum=0,carry=0;
        while(l1&&l2){
            sum=l1->val+l2->val+carry;
            carry=sum/10;
            sum=sum%10;
            
            //cout<<carry<<endl;
            if(head==NULL){
                ListNode* new_node= new ListNode(sum);
                head=new_node;
                tail=new_node;
            }
            else{
                ListNode* new_node= new ListNode(sum);
                tail->next=new_node;
                tail=new_node;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            sum=l1->val+carry;
            carry=sum/10;
            sum=sum%10;
            if(head==NULL){
                ListNode* new_node= new ListNode(sum);
                head=new_node;
                tail=new_node;
            }
            else{
                ListNode* new_node= new ListNode(sum);
                tail->next=new_node;
                tail=new_node;
            }
            l1=l1->next;
        }
        while(l2){
            sum=l2->val+carry;
            carry=sum/10;
            sum=sum%10;
            if(head==NULL){
                ListNode* new_node= new ListNode(sum);
                head=new_node;
                tail=new_node;
            }
            else{
                ListNode* new_node= new ListNode(sum);
                tail->next=new_node;
                tail=new_node;
            }
            l2=l2->next;
        }
        if(carry!=0){
            ListNode* new_node= new ListNode(carry);
                tail->next=new_node;
                tail=new_node;
        }
        return head;
    }
};
