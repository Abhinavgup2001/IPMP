void helper(struct Node* root, int target, vector<int> ans,vector<int> &result){
    if(root==NULL)
    return ;
    
    ans.push_back(root->data);
    
    if(root->data==target){
        ans.pop_back();
        result=ans;
        return;
    }
    
    helper(root->left,target,ans,result);
    helper(root->right,target,ans,result);
}

class Solution{
  public:
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target)
    {
        
        vector<int> ans,result;
        
        helper(root,target,ans,result);
        
        reverse(result.begin(),result.end());
        
        return result;
         // Code here
    }
};
