int height(Node* root){
    if(root==NULL)
    return 0;
    return 1+max(height(root->left),height(root->right));
}
vector<int> level(struct Node* root, int k , vector<int> ans){
    
    if(root==NULL)
    return ans;
    if(k==0)
    {
        ans.push_back(root->data);
        return ans;
    }
    ans=level(root->left,k-1,ans);
    ans=level(root->right,k-1,ans);
    return ans;
}
vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  vector<int> ans;
  if(root==NULL)
  return ans;
  int h=height(root);
  if(k>h-1)
  return ans;
  
  ans=level(root,k,ans);
  return ans;
}
