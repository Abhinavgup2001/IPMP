void rootPaths(Node* root, vector<vector<int>> &v){
     
     static vector<int> ans;
     
     if(root==NULL){
         return;
     }
     
     
     ans.push_back(root->data);
     
     if(root->left==NULL&& root->right==NULL){
          v.push_back(ans);
          ans.pop_back();

     return ;
     }
     
     
     rootPaths(root->left,v);
          rootPaths(root->right,v);
          ans.pop_back();

      
     
     
 }
 
vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>> v;
    rootPaths(root,v);
    
    return v;
    

}
