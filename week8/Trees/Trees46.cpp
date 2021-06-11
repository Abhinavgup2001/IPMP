bool checkPath(TreeNode* root, int S, int& temp){
    
    if(root==NULL)
    return false;
    
    temp+=root->val;
    
    if(root->left==NULL&&root->right==NULL)
    {
    	
    	cout<<temp<<" "<<root->val<<endl;
    if(temp==S)
    return true;
    else{
    temp-=root->val;
    return false;
    }
    }
    
   bool b1= checkPath(root->left,S,temp);
   if(b1)
   return true;
bool b2=    checkPath(root->right,S,temp);
if(b2)
return true;
    temp-=root->val;
    
    return false;
}

class Solution {
public:
    bool hasPathSum(TreeNode* root, int S) {
        
        
          int temp=0;
        
        return checkPath(root,S,temp);
    
        
    }

