int height(Node* root){
    if(root==NULL)
    return 0;
    
    int left=height(root->left);
    int right=height(root->right);
    return 1+max(left,right);
}

vector<int> level(Node* root, int l, int h, vector<int> ans){
    if(root==NULL)
    return ans;
    if(l==h){
    ans.push_back(root->data);
    return ans;
    }
    
    
   ans= level(root->left,l+1,h,ans);
    ans= level(root->right,l+1,h,ans);
    return ans;
}

vector<int> reverseLevelOrder(Node *root)
{
    vector<int> result;
    int h=height(root);
    for(int i=1;i<=h;i++){
    vector<int> ans;
    ans=level(root,i,h,ans);
    for(int i=0;i<ans.size();i++)
    result.push_back(ans[i]);
    }
    // code here
    return result;
}
