vector<int> leftView(Node *root)

{
   // Your code here
   vector<int> ans;
   if(root==NULL)
        return ans;
        bool flag=true;
        
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            while(size--){
                Node* temp=q.front();
                q.pop();
                if(temp){
                q.push(temp->left);
                q.push(temp->right);
                if(flag){
            ans.push_back(temp->data);
            flag=false;
                }
            }
        }
    flag=true;
        }
   return ans;
}
