void inorderhelp(Node* root, vector<int> &ans){
    if(root==NULL)
    return ;
    
    inorderhelp(root->left,ans);
    ans.push_back(root->data);
    inorderhelp(root->right,ans);
    
}

class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        // Your code here
        
        if(root==NULL)
        return NULL;
        
        vector<int> ans;
        inorderhelp(root,ans);
        
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]>=ans[i+1])
            return false;
        }
        return true;
    }
};
