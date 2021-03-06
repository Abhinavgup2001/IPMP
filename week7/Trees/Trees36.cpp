#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data)
{
    struct node* node =
        (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

bool childrenSum(node* root){
	
	if(root==NULL)
	return true;
	
	
	
	if(root->left||root->right){
		int l=0,r=0;
		if(root->left)
		l=root->left->data;
		if(root->right)
		r=root->right->data;
		if(root->data==l+r)
		return true;
		else
		return false;
	}
	if(childrenSum(root->left)||childrenSum(root->right))
	return true;
	
	return false;
}
int main(){
	struct node *root = newNode(9);
    root->left     = newNode(8);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->right = newNode(2);
    if(childrenSum(root))
        cout << "The given tree satisfies "
            << "the children sum property ";
    else
        cout << "The given tree does not satisfy "
            << "the children sum property ";
  
    
    return 0;
}

