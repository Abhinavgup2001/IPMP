ListNode* prevmiddle(ListNode* head){
    if(head==NULL)
        return NULL;
    
    ListNode* slow=head;
    ListNode* fast=head;
    ListNode* prev=NULL;
    
    while(fast&&fast->next){
        fast=fast->next->next;
        prev=slow;
        slow=slow->next;
        
    }
    return prev;
    
}

TreeNode* convert(ListNode* head){
    
    if(head==NULL)
        return NULL;
    
 
    if(head->next==NULL){
        TreeNode* newNode= new TreeNode(head->val);
        return newNode;
    }   
    
    
    
    ListNode* prev=prevmiddle(head);
    ListNode* mid=prev->next;
     int data=mid->val;
    ListNode* head2=mid->next;
    mid->next=NULL;
    prev->next=NULL;
   
    //cout<<data<<endl;
    //delete(mid);
    
    

        
        TreeNode* newNode= new TreeNode(data);
    
     
    
    newNode->left=convert(head);
    newNode->right=convert(head2);
    
    
    return newNode;
    
    
    
}

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
     
       
        
        return convert(head);
    }
};
