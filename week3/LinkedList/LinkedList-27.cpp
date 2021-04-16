// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
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
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
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
class Solution{
public:
    Node* alternateOddEven(int N, Node *head){
        // code here
       
       Node* temp=head;
       Node* heade=NULL;
       Node* heado=NULL;
       Node* taile=NULL;
       Node* tailo=NULL;
       while(temp){
           if((temp->data%2)!=0)
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
    
tailo->next=NULL;

//for LinkedList27 Alternat odd even//
Node* temp1=heado;
Node* temp2=heade;
Node* next1;
Node* next2;
Node* ptr;
while(temp1&&temp2){
	next1=temp1->next;
	next2=temp2->next; 
	
	temp1->next=temp2;
	temp2->next=next1;
	ptr=temp2;
	
	
	temp1=next1;
	temp2=next2;
}
if(temp1==NULL)
ptr->next=temp2;
return heado;
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.alternateOddEven(N, head);
        cout<<ans->data<<endl;
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends
