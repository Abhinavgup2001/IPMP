void helper(TreeNode* root, vector<int>& ans){
    
    if(root==NULL)
    return;
    
    helper(root->left,ans);
    ans.push_back(root->val);
    helper(root->right,ans);

}

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        
        vector<int> ans;
        helper(root,ans);
        
        int i=0,j=ans.size()-1;
        
        while(i<j){
            int sum=ans[i]+ans[j];
if(sum==k)
    return true;
            
            else if (sum>k)
                j--;
            else
                i++;
        
            
        }
        return false;
    }
};
