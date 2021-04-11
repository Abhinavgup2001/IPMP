bool isSumSorted(Node *headA, Node *headB,  Node *headC, int target) 
{ 
vector<int>  v;
    Node *a = headA; 
    while (a != NULL) 
    { 
        Node *b = headB; 
        Node *c = headC; 
        while (b != NULL && c != NULL) 
        { 
            int sum = a->data + b->data + c->data; 
            if (sum == target) 
            { 
            v.push(a->data);
            v.push(b->data);
            v.push(c->data);
            return v; 
            } 
            else if (sum < target) b = b->next; 
            else c = c->next; 
        } 
        a = a->next;
    } 
  
    
    return v; 
} 
