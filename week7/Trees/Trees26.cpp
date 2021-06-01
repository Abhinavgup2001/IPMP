void helper(Node* root, Node* x, Node* &ans){
    
        static Node* temp=NULL;
        //Your code here
        if(root==NULL||x==NULL)
        return;
        
    
    
    helper(root->right,x,ans);
    
    if(root==x){
 ans=temp;
    }
    
    temp=root;
    
    helper(root->left,x,ans);
    
    return ;
    
}
class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        static Node* ans=NULL;
        helper(root,x,ans);
        return ans;

    

    }
};
