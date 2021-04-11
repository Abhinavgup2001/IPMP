/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A, int B) {
    
ListNode* curr=A;
ListNode* nex=NULL;
ListNode* prev=NULL;
int count=0;
while(curr&& count<B){
    nex=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nex;
    count++;
}
A->next=curr;
int temp=1;

while(curr && temp<B){
    temp++;
    curr=curr->next;
}
if(curr&&curr->next)
curr->next=solve(curr->next,B);

return prev;
    
}

