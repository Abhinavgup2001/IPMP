int getLevelDiff(Node *root)
    {
        if(root==NULL)
        return 0;
        int oddsum=0,evensum=0,level=1;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            while(size--){
                Node* temp=q.front();
                q.pop();
                if(temp){
                if(level%2==0)
                evensum+=temp->data;
                else
                oddsum+=temp->data;
                q.push(temp->left);
                q.push(temp->right);
            }
        }
        level++;
        }
        return oddsum-evensum;
       //Your code here
    }
