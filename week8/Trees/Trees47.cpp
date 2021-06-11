int maxPathHelper(TreeNode* root, int &result){
    
    if(root==NULL)
        return 0;
    
    int left=maxPathHelper(root->left,result);
    int right=maxPathHelper(root->right,result);
    
    int straightpath= max((max(left,right)+root->val),root->val);
    int rootpath= max(straightpath,left+right+root->val);
result=max(result,rootpath);
    
    return straightpath;
}
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        
        int result=INT_MIN;
        maxPathHelper(root,result);
        return result;
    }
};
