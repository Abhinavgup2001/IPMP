vector<int> left(Node* root, vector<int> ans, Node* temp){
    if(root==NULL)
    return ans;
    
    if(root->left==NULL && root->right==NULL)
    return ans;
ans.push_back(root->data);
if(root!=temp){
if(root->left!=NULL)
ans=left(root->left,ans,temp);
else
ans=left(root->right,ans,temp);
}
else
ans=left(root->left,ans,temp);
return ans;
    
}
vector<int> leaf(Node* root, vector<int> ans){
 if(root==NULL)
 return ans;
 
 if(root->left==NULL && root->right==NULL){
     ans.push_back(root->data);
    return ans;
 }
 ans=leaf(root->left,ans);
 ans=leaf(root->right,ans);
 return ans;
}
vector<int> right(Node* root, vector<int> ans){
    if(root==NULL)
    return ans;
    
    if(root->left==NULL && root->right==NULL)
    return ans;
    if(root->right!=NULL)
    ans=right(root->right,ans);
    else
    ans=right(root->left,ans);
    ans.push_back(root->data);
    return ans;
}
class Solution {
public:
    vector <int> printBoundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL)
        return ans;
        
        if(root->left==NULL&&root->right==NULL){
            ans.push_back(root->data);
            return ans;
        }
        
        ans=left(root,ans,root);
        ans=leaf(root,ans);
        ans=right(root->right,ans);
        
        return ans;
        
    }
