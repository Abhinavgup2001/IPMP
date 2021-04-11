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
ListNode* revLL(ListNode* head){
    if(head==NULL||head->next==NULL)
        return head;
    
    ListNode* newHead=revLL(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
    
    
}
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            count++;
        }
        ListNode* middle=head;
        int r=(count-1)/2;
        int i=0;
        while(i<r){
            middle=middle->next;
            i++;
        }
    ListNode* newHead= revLL(middle->next);
        middle->next=newHead;
        
    /*ListNode* check=head;
        while(check){
            cout<<check->val<<endl;
            check=check->next;
        }*/
        while(newHead){
            if(head->val!=newHead->val){
                return false;
            }
            head=head->next;
            newHead=newHead->next;
        }
        return true;
    }
};
