 bool isCompleteBT(Node* root){
        //code here

        bool flag=false;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
        
                Node* temp=q.front();
                q.pop();
                
                if(temp->left){
                    if(flag==true){
                      //  cout<<"A"<<endl;
                    return false;
                    }
                    q.push(temp->left);
                }
                else
                flag=true;
                
                if(temp->right){
                    if(flag==true){
                    //    cout<<"B"<<endl;
                    return false;
                    }
                    q.push(temp->right);
                }
                else
                flag=true;
            }
        
        
        return true;
    }
