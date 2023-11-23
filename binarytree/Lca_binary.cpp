#include<bits/stdc++.h>
using namespace std;


    class Node {
        public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
    };






void inorder( Node *root){
     if(root==NULL){
    return;
  }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}



Node* LCA(Node* root ,int n1 ,int n2){
    if(root==NULL)  return NULL;
    if(root->data==n1 || root->data==n2) 
    return root; // this is base condition
    Node* left=LCA(root->left,n1,n2);
    Node* right=LCA(root->right,n1,n2);
    if(left!=NULL && right!=NULL){
        return root;

    }
   else  if(left!=NULL && right==NULL){
        return left;
    }
     else if(left==NULL && right!=NULL){
        return right;
     }
        else{
            return NULL;
        }
    

   
}



int main(){



Node* node1 = new Node(10);Node* root=node1;
root->left=new Node(20);
root->right=new Node(30);
root->left->left=new Node(40);
root->left->right=new Node(50);
root->right->left=new Node(60);

   
inorder(root);
cout<<LCA(root,40,50)->data;
return 0;
}