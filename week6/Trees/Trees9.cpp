void connect(Node *root)
    {
       if(root==NULL)
        return ;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
                Node* temp=q.front();
                q.pop();
                if(temp){
                temp->nextRight=q.front();
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
            else{
                if(q.size()==0)
                break;
                q.push(NULL);
                
            }
        }
        
        }
