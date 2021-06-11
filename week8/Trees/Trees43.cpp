class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
    
        
        if(root==NULL)
            return NULL;
        
        
      root->left=   trimBST(root->left,low,high);
      root->right = trimBST(root->right,low,high);
        
        
        if(root->val>high){
            
            TreeNode* node=root->left;
           // delete(root);
            return node;
        }
        
        if(root->val<low){
            
            TreeNode* node=root->right;
            //delete(root);
            return node;
        }
        
        return root;
        
        
    }
