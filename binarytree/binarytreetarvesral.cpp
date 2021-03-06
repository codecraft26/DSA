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

// function for count all the node in a binnary tree
int getmax(Node *root){
  if(root==NULL){
    return 0;
  }
  return getmax(root->left)+getmax(root->right)+1;

}

//sum of all the node in binary tree 
int sumofallnode(Node *root){
if(root==NULL){
  return 0;
}
else
  return sumofallnode(root->left)+sumofallnode(root->right)+root->data;
}



// hieght of a binaryy tree 
// deepest node of a binary tree 

int calhieghtTree(Node *root){
  if(root==NULL)
  return 0;
  int lhieght=calhieghtTree(root->left);
  int rhieght=calhieghtTree(root->right);
  
  return max(lhieght,rhieght)+1;

}
int main() 
{
  
    struct Node *root=new Node(1);
    root->left=new Node(3);
      root->left->left=new Node(3);
    root->left->right=new Node(5);
 root->left->right->right=new Node(5);
   cout<< getmax(root)<<endl;// printing the number of node in binary tree
   cout<<sumofallnode(root)<<endl;//printing  the sum of node binary tree
   cout<<"hieght of binary tree is "<<calhieghtTree(root)<<endl;// calcuatting the hieght of binary tree
    return 0;


    
}