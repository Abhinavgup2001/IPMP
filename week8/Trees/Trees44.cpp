bool sumget(TreeNode* root, int limit,int sum)
{
    
    //static prev=NULL;
if(root==NULL)
    return false;
    
    sum+=root->val;
    
    if(root->left==NULL && root->right==NULL){
        cout<<sum<<endl;
        if(sum>=limit){
            return true;
        }
        else{
            cout<<"sum is less"<<endl;
            return false;
        }
    
    }
    
   // prev=root;
    bool b1=sumget(root->left,limit,sum);
    if(!b1)
        root->left=NULL;
    bool b2=sumget(root->right,limit,sum);
    if(!b2)
        root->right=NULL;
    
    if(!b1&&!b2){
        return false;
    }
    
    return true;
}

class Solution {
public:
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        
        if(sumget(root,limit,0))
        return root;
        
        return NULL;
        
    }
};
