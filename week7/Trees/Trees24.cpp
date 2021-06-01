int minValue(Node* root)
{
    // Code here
    int result=root->data;
    
    while(root){
        result=root->data;
        root=root->left;
    }
    return result;
}
