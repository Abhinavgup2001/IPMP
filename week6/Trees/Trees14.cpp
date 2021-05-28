bool check(Node *root)
    {
        if(root==NULL)
        return true;
        int oddsum=0,evensum=0,level=1;
        vector<int> v;
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
                if(temp->left==NULL&& temp->right==NULL){
                v.push_back(level);
                }
            }
        }
        level++;
        }
        int temp=v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]!=temp)
            return false;
        }
        //Your code here
        return true;
    }
