void rangequeries(Node* root, vector<int>& ans,int low,int high){
    
    if(root==NULL)
    return;
    
    rangequeries(root->left,ans,low,high);
    if(low<=root->data&&root->data<=high)
    ans.push_back(root->data);
    rangequeries(root->right,ans,low,high);

}



//Function to return a list of BST elements in a given range.
vector<int> printNearNodes(Node *root, int low, int high)
{
    
    vector<int> ans;
    rangequeries(root,ans,low,high);

    
    return ans;
  // your code goes here   
}
