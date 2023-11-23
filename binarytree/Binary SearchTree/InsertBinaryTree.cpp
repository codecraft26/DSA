#include <bits/stdc++.h>
using namespace std;
class Node{
   public:
        int data;
        Node* left;
        Node* right;
        //constructor
        Node(int data){
            this->data=data;
            this->right=NULL;
            this->left=NULL;

        }
      


};


bool Search(Node * root ,int val){
    if(root==NULL){
        return false;
    }

    if(val==root->data){
      return true;
    }
    if(root->data>val){
        return Search(root->left,val);

    }
    else{
        return Search(root->right,val);

    }
   
}
Node* insert(Node *root ,int val){
    if(root==NULL){
        return new Node(val);
        return root;

    }

    if(root->data>val){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);

    }
    return root;



}

  void inorder( Node *root){
     if(root==NULL){
    return;
  }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node *root){
    if(root== NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    
Node *root=NULL;
root=insert(root,5);
insert(root,78);
insert(root,67);
insert(root,89);
insert(root,34);
preorder(root);







return 0;
}