void inorderhelp(Node* root,vector<int> &ans){
    if(root==NULL)
    return ;
    
    inorderhelp(root->left,ans);
    ans.push_back(root->data);
    inorderhelp(root->right,ans);
}

class Solution{
  public:
    // Return the Kth smallest element in the given BST 
    int KthSmallestElement(Node *root, int K)
    {
        vector<int> ans;
        inorderhelp(root,ans);
        if(K>ans.size())
        return -1;
        return ans[K-1];
        //add code here.
    }
};
