// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

// task is to complete this function
struct Node* arrange(Node *head);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        head = arrange(head);
        printlist(head);
    }
	return 0;
}

// } Driver Code Ends


/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// task is to complete this function
// function should return head to the list after making 
// necessary arrangements
struct Node* arrange(Node *head)
{
    Node* temp=head;
       Node* heade=NULL;
       Node* heado=NULL;
       Node* taile=NULL;
       Node* tailo=NULL;
       while(temp){
           if(temp->data!='a'&&temp->data!='e'&&temp->data!='i'&&temp->data!='o'&&temp->data!='u')
           {
               if(heado==NULL){
                   heado=temp;
                   tailo=heado;
               }
               else{
                   tailo->next=temp;
                   tailo=temp;
               }
           }
       
       else{
           if(heade==NULL){
                   heade=temp;
                   taile=heade;
               }
               else{
                   taile->next=temp;
                   taile=temp;
               }
       }
       temp=temp->next;
    }
    if(heado==NULL||heade==NULL)
    return head;
taile->next=heado;
tailo->next=NULL;
head=heade;
    return head;
}

