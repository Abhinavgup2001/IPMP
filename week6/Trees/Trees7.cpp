void populateNext(struct node* p)
{
 
   if(p){
    static struct node* pre = NULL;
    populateNext(p->right);
    p->next = pre;
    pre = p;
    populateNext(p->left);
    
}
}
