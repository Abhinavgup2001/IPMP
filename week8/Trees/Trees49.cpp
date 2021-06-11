void printAncestors(struct Node *root, int key)
{
	
	stack<Node*> s;
    if (root == NULL) return;
 
 
    while (1)
    {
        
        while (root && root->data != key)
        {
           s.push(root);  
            root = root->left;  
        }
 
        
        if (root && root->data == key)
            break;
 
        
        if (s.top()->right == NULL)
        {
            root = s.top();
            s.pop();
 
           
            while (!s.empty()&& s.top()->right == root){
            	
            	 root = s.top();
            	 s.pop();
			}
              
        }
 
        
        root = s.empty()? NULL: s.top()->right;
    }
 
   
    while (!s.empty()){
        cout<<s.top()->data<<endl;
        s,pop()
    }
}
