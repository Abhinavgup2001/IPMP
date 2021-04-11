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
    Node* divide(int N, Node *head){
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
    if(heado==NULL||heade==NULL)
    return head;
taile->next=heado;
tailo->next=NULL;
head=heade;
    return head;
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
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends
