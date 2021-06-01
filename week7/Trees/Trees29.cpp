int sum(Node* root, bool &b){
    
    if(root==NULL)
    return 0;
    
    int l= sum(root->left,b);
    int r= sum(root->right,b);
    if(root->left&&root->right){
    if(root->data==(l+r)){
        b=true;
    }
    else
    b=false;
    }
    
    return l+r+root->data;
}
class Solution
{
    public:
    bool isSumTree(Node* root)
    {
         // Your code here
         if(root==NULL)
         return true;
         
         bool b=false;
         sum(root,b);
         return b;
         
    }
};
