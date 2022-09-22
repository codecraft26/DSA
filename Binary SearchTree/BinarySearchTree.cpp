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
    
        Node* node1 = new Node(10);
    Node* root=node1;
    root->left=new Node(3);
    root->right=new Node(34);
    root->left->left=new Node(1);
    root->right->left=new Node(5);
    preorder(root);
    if(Search(root,34)){
        cout<<"exits";

    }
    else{
        cout<<"doest exist";
    }

    




return 0;
}