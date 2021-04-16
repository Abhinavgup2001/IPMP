/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
    if(head==NULL)
        return head;
    Node* temp=head;
        Node* dh=NULL;
        while(temp){
            Node* new_node= new Node(temp->val);
            if(dh==NULL){
             dh=new_node;
            }
            new_node->next=temp->next;
             temp->next=new_node;
            temp=temp->next->next;
        }
      /*  temp=head;
        while(temp){
            cout<<temp->val<<" "<<endl;
            temp=temp->next;
        }
        */
        temp=head;
        while(temp&&temp->next){
            if(temp->random)
            temp->next->random=temp->random->next;
            
            else
            temp->next->random=NULL;
            
            temp=temp->next->next;
        }

        Node* temp1=head;
        Node* temp2=dh;
    
        while(temp1->next&&temp2->next){
            temp1->next=temp1->next->next;
            temp2->next=temp2->next->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1->next=NULL;
       
        
        return dh;
    }
};
