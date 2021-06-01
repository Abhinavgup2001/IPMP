int sum(Node* root){
    if(root==NULL)
    return 0;
    
    int l=sum(root->left);
    int r=sum(root->right);
    int temp=root->data;
    if(!root->left&&!root->right){
        root->data=0;
    }
    else
        root->data=l+r;
        return l+r+temp;
    
}

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
     sum(node);
        // Your code here
    }
};
