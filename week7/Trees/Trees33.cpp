bool helpfold(Node* n1, Node* n2){
    
    if(!n1&&!n2)
    return true;
    
    if((!n1&&n2)||(n1&&!n2))
    return false;
    
    if(helpfold(n1->left,n2->right)&&helpfold(n1->right,n2->left))
    return true;
    
    return false;
    
}

//Function to check whether a binary tree is foldable or not.
bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root==NULL)
    return true;
    
    return helpfold(root->left,root->right);
}
