/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool path(TreeNode* root, TreeNode* n, vector<TreeNode*> &paths){
    if(root==NULL)
    return false;
    
    paths.push_back(root);
    //cout<<root->val<<endl;
    if(root==n){
        return true;
    }
    
    if(path(root->left,n,paths)|| path(root->right,n,paths))
    return true;
    
    paths.pop_back();
    return false;
}
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     
        vector<TreeNode*> path1,path2;
     if(!path(root,p,path1)||!path(root,q,path2))
     return root;
        cout<<path1.size()<<" "<<path2.size();
    int i;
     for(i=0;i<path1.size()&& i<path2.size();i++ ){
         //cout<<path1[p]->data<<" "<<path2[p]->data<<endl;
         if(path1[i]!=path2[i])
         break;
     }
     return path1[i-1]; 
       //Your code here 
    }
        
    
};
