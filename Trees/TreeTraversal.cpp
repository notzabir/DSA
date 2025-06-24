/******************************************************************************

Leetcode - Trees
Inorder, Preorder and Postorder traversals
Inorder - left, root, right
Preorder - root, left, right
Postorder - left, right, root

*******************************************************************************/
#include <iostream>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* newNode(int data){
    node* temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

void printInorder(node * node)
{
    if(node == NULL)
    return;
    
    /* first traverse left part of tree */
    printInorder(node->left);
    
    /* then print data */
    cout<<node->data<<" ";
    
    /* and last traverse right part of tree */
    printInorder(node->right);
}

void printPreorder(node * node)
{
    if(node == NULL)
    return;
    
    cout<<node->data<<" ";
    
    printPreorder(node->left);
    
    printPreorder(node->right);
}

void printPostorder(node * node)
{
    if(node == NULL)
    return;
    
    printPostorder(node->left);
    
    printPostorder(node->right);
    
    cout<<node->data<<" ";
}

int main()
{
    node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->right = newNode(5);
    
    /*
                1 
               / \    
              2   3 
             / \ 
            4   5
    */
    cout <<"Inorder traversal of tree: "<< endl;
    printInorder(root);
    
    cout <<"Preorder traversal of tree: "<< endl;
    printPreorder(root);
    
    cout <<"Postorder traversal of tree: "<< endl;
    printPostorder(root);
    
    return 0;
}