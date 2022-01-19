#include <iostream>
using namespace std;

struct Node{
  int data;
   struct Node *left;
   struct Node * right;
   Node(int val){
   data=val;
   left=NULL;
   right=NULL;
 
}
};
void preorder(Node *root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
void inorder( Node *root){
     if(root==NULL){
    return;
  }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main() 
{
  
    struct Node *root=new Node(1);
    root->left=new Node(3);
      root->left->left=new Node(3);
        root->left->right=new Node(5);
        // root->right->left=new Node(9);
    preorder(root);
    cout<<endl;
    inorder(root);
    return 0;
}