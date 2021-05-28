int height(Node *root){
    if(root==NULL)
    return 0;
    return 1+max(height(root->left),height(root->right));
}

vector<int> level(Node* root, int l,int m, vector<int> v){
    
    if(root==NULL)
    return v;
    if(l==1){
    v.push_back(root->data);
    return v;
}
if(m%2!=0){
    v=level(root->left,l-1,m,v);
    v=level(root->right,l-1,m,v);
}
else{
    v=level(root->right,l-1,m,v);
    v=level(root->left,l-1,m,v);
}
return v;
}
//Function to store the zig zag order traversal of tree in a list.
vector <int> zigZagTraversal(Node* root)
{
     vector<int> ans;
    if(root==NULL)
    return ans;
    int h=height(root);
    for(int i=1;i<=h;i++){
        vector<int> v;
        v=level(root,i,i,v);
        for(int i=0;i<v.size();i++)
        ans.push_back(v[i]);
    }
    return ans;
    
	// Code here
}
