void doubletree(Node * root ){
	
	Node* prev;
	
	if(root==NULL)
	return;
	
	doubletree(root->left);
    doubletree(root->right);
    
	prev=root->left;
	root->left= new Node(root->data);
	root->left->left=prev; 
	
	
}
