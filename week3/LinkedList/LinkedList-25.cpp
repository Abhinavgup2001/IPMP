// { Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int n, int k)
{
    // Your Code here
    if(k>n)
    return head;
    
    if(2*k-1==n)
    return head;
    
    Node* x=head;
    Node * xprev=NULL;
    for(int i=1;i<k;i++){
        xprev=x;
        x=x->next;
    }
     Node* y=head;
    Node * yprev=NULL;
    for(int i=1;i<n-k+1;i++){
        yprev=y;
        y=y->next;
    }
    if(xprev){
        xprev->next=y;
    }
    if(yprev){
        yprev->next=x;
    }
    Node* temp=x->next;
    x->next=y->next;
    y->next=temp;
    if(k==1)
    head=y;
    if(k==n)
    head=x;
    return head;
}

