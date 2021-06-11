TreeNode* helper(vector<int>& nums,int start, int end)
{
if(start>end)
    return NULL;
    
    int mid= start+(end-start)/2;
    TreeNode* node= new TreeNode(nums[mid]);
    
    if(start==end)
        return node;
    
    
    node->left=helper(nums,start,mid-1);
    node->right=helper(nums,mid+1,end);
    
    return node;
}

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return helper(nums,0,nums.size()-1);
        
    }
};
