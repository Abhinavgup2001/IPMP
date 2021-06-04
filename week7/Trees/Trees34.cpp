void mirror(Node* root)
    {
    
    if(root==NULL)
    return;
    
    if(!root->left&&!root->right)
    return;
    
    mirror(root->left);
    mirror(root->right);
    Node* temp=root->left;
    root->left=root->right;
    root->right=temp;
    
    }
