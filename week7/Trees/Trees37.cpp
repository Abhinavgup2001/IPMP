#include<bits/stdc++.h>
using namespace std;


class node 
{ 
    public:
    int data; 
    node* left; 
    node* right; 
      
    /* Constructor that allocates a new node 
    with the given data and NULL left and right 
    pointers. */
    node(int data)
    {
        this->data = data; 
        this->left = NULL; 
        this->right = NULL;
    }
}; 

int childrenSum(Node* root){
	if(root==NULL)
	return 0;
	
	if(root->left==NULL&root->right==NULL)
	return root->data;
	
	
	
	
}


void printInorder(node* node) 
{ 
    if (node == NULL) 
        return; 
      
    /* first recur on left child */
    printInorder(node->left); 
      
    /* then print the data of node */
    cout<<node->data<<" ";
      
    /* now recur on right child */
    printInorder(node->right); 
} 


int main() 
{ 
    node *root = new node(50); 
    root->left = new node(7); 
    root->right = new node(2); 
    root->left->left = new node(3); 
    root->left->right = new node(5); 
    root->right->left = new node(1); 
    root->right->right = new node(30); 
      
    cout << "\nInorder traversal before conversion: " << endl; 
    printInorder(root);
      
    childrenSum(root); 
      
    cout << "\nInorder traversal after conversion: " << endl; 
    printInorder(root); 
    return 0; 
}
