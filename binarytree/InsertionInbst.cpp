#include <bits/stdc++.h>
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
//inorder
void inorder( Node *root){
     if(root==NULL){
    return;
  }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node* insertBST(Node *root, int val) {
  if(root==NULL){
    return new Node(val);

  }
  if(root->data>val){
    root->left=insertBST(root->left,val);
  }
  else{
    root->right=insertBST(root->right,val);
  }
      return root;
}
Node* SearchinBst(root,val){
  if(root==NULL){
    return NULL;
  }
  if(root->data==val){
    return root;
  }
  if(root->data>val){
    return Search(root->left,val);
  }
  else{
    return Search(root->right,val);
  }
}
  Node* deleteInBst(root,val){
    if(root==NULL){
      return NULL;
    }
    if(root->data>val){
      root->left=deleteInBst(root->left,val);
    }
    else if(root->data<val){
      root->right=deleteInBst(root->right,val);
    }
    else{
      if(root->left==NULL){
        Node *temp=root->right;
        delete root;
        return temp;
      }
      else if(root->right==NULL){
        Node *temp=root->left;
        delete root;
        return temp;
      }
      Node *temp=root->right;
      while(temp->left!=NULL){
        temp=temp->left;
      }
      root->data=temp->data;
      root->right=deleteInBst(root->right,temp->data);
    }
    return root;
  }


int main(){
  Node *root=NULL;
  for(int i=0;i<10;i++){
    root=insertBST(root,i);
  }
  preorder(root);
  if(SearchinBst(root,5)){
    cout<<"\nfound";
  }
  else{
    cout<<"\nnot found";
  }
  return 0;
}

