void sum(Node *root, int &result){
    if(root==NULL)
    return ;
    
    sum(root->left,result);
    result=result+root->data;
    sum(root->right,result);
    
}

Node* modifiedTree(Node *root, int &result){
    
    if(root==NULL)
    return NULL;
    
    modifiedTree(root->left,result);
    int temp=root->data;
    root->data=result;
    result-=temp;
    modifiedTree(root->right,result);
    
    return root;
}
Node* modify(Node *root)
{
    // Your code here
    if(root==NULL)
    return NULL;
    int result=0;
    sum(root,result);
    root=modifiedTree(root,result);
    return root;
    
}
