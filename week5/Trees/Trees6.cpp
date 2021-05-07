void printPreOrder(Node * root){
	if(root==NULL
	return ;
	cout<<root->data<<endl;
	printPreOrder(root->left);
    printPreOrder(root->right);	
}
void printPostOrder(Node * root){
	if(root==NULL
	return ;
	
	printPreOrder(root->left);
    printPreOrder(root->right);	
    cout<<root->data<<endl;
}
void printInOrder(Node * root){
	if(root==NULL
	return ;

	printPreOrder(root->left);
		cout<<root->data<<endl;
    printPreOrder(root->right);	
}
