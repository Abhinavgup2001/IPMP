bool cmp(struct Node* a,struct Node* b){
return a->data<b->data;
}

vector<struct Node*> inorderHelp(struct Node* root,vector<struct Node*> v){

if(root==NULL)
return v;

v=inorderHelp(root->left,v);
v.push_back(root);
v=inorderHelp(root->right,v);

return v;
}
class Solution {
public:
    void correctBST( struct Node* root )
    {
        vector<struct Node*> v;
        v=inorderHelp(root,v);
        
       // for(int i=0;i<v.size();i++){
        //cout<<v[i]->data<<" ";
        //}
        //cout<<endl;
        
        vector<struct Node* > temp=v;
        
        sort(temp.begin(),temp.end(),cmp);
        
      //  for(int i=0;i<v.size();i++){
    //    cout<<temp[i]->data<<" ";
      //  }
        //cout<<endl;
        int i=0;
        for(i=0;i<v.size();i++){
            if(v[i]->data!=temp[i]->data)
            break;
        }
        if(i<v.size()){
        struct Node* k1=v[i];
        //cout<<k1->data<<" ";
        int d=temp[i]->data;
        int j;
        for( j=i+1;j<v.size();j++){
            if(v[j]->data==d)
            break;
        }
        struct Node* k2=v[j];
       // cout<<k2->data;
        int tempc=k1->data;
        k1->data=k2->data;
        k2->data=tempc;
    
        }
    }
        // add code here.
    
};
