#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* npx;
};

Node* node_xor(Node* a, Node* b){
	return reinterpret_cast<Node *>(
      reinterpret_cast<uintptr_t>(a) ^
      reinterpret_cast<uintptr_t>(b));
}
void insertAtEnd(Node** head, int val){
Node* new_node= new Node();
new_node->data=val;

new_node->npx=*head;
if(*head!=NULL){
	(*head)->npx=node_xor(new_node,(*head)->npx);
}
*head=new_node;	
}

void printList(Node* head){
	Node* curr=head;
	Node* prev=NULL;
	Node* next;
	while(curr){
		cout<<curr->data<<" ";
		next=node_xor(prev,curr->npx);
		prev=curr;
		curr=next;
	}
}
int main(){
	Node* head=NULL;
	insertAtEnd(&head,10);
	insertAtEnd(&head,20);
	insertAtEnd(&head,30);
	insertAtEnd(&head,40);
	insertAtEnd(&head,50);
	insertAtEnd(&head,60);
	printList(head);
}
