int height(Node* root){
    if(root==NULL)
    return 0;
    
    int l=height(root->left);
    int r=height(root->right);
    return 1+max(l,r);
}

//Function to check whether a binary tree is balanced or not.
bool isBalanced(Node *root)
{
    if(root==NULL)
    return true;
    
    int l=height(root->left);
    int r=height(root->right);
    //cout<<l<<" "<<r<<endl;
    if(abs(l-r)>1)
    return false;
    
    if(isBalanced(root->left)&&isBalanced(root->right))
    return true;
    
    return false;
    
    

}
