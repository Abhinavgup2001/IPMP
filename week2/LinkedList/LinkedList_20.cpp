// { Driver Code Starts


#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void append(struct Node** headRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)last = last->next;
	last->next = new_node;
}

void printList(struct Node *node)
{
    while(node!=NULL){
        printf("%d ", node->data);
        node = node->next;
    }
    cout<<endl;
} 

void alternatingSplitList(struct Node*); 

struct Node* a;
struct Node* b;

int main()
{
    int test;
    cin>>test;
    
    while(test--)
    {
        a=b=NULL;
        struct Node* head = NULL;
        
        
        int n, k;
        cin>>n;
        
        while(n--)
        {
            cin>>k;
            append(&head, k);
        }
        
        alternatingSplitList(head);
        printList(a);
        printList(b);
    }
    return 0;
}



// } Driver Code Ends


/*
structure of node is as
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/


/*
These are global variables to store heads of split lists
struct Node* a; //store head of first list
struct Node* b; //store head of second list

*/

void alternatingSplitList(struct Node* head) 
{
    
    
    Node* tail1=NULL;
    Node* tail2=NULL;
    Node* temp=head;
    
    while(temp){
    if(a==NULL){
        a=temp;
        tail1=a;
    }
    else{
        tail1->next=temp;
        tail1=temp;
    }
    temp=temp->next;
    
    
    if(temp){
    if(b==NULL){
        b=temp;
        tail2=b;
    }
    else{
        tail2->next=temp;
        tail2=temp;
    }
    
    temp=temp->next;
    }
    

}
if(tail1)
tail1->next=NULL;
if(tail2)
tail2->next=NULL;




}


