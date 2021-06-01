bool path(Node* root,int n1, vector<Node*> &ans){
    if(root==NULL)
    return false;
    
    ans.push_back(root);
    
    if(root->data==n1)
    {
        return true;
    }
    bool b=false;
    if(root->data>n1)
    b=path(root->left,n1,ans);
    else
    b=path(root->right,n1,ans);
    
    if(b)
    return true;
    return false;
    
}


//Function to find the lowest common ancestor in a BST. 
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(root==NULL)
   return NULL;
   
   vector<Node*> path1, path2;
   if(!path(root,n1,path1)||!path(root,n2,path2))
   return root;
   
       int i=0;
       for(i=0;i<path1.size()&&i<path2.size();i++){
           if(path1[i]!=path2[i])
           break;
       }
       return path1[i-1];
       
   }
