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

void postorder(Node* root){
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
    

}

int main(){
    
        Node* node1 = new Node(10);
    Node* root=node1;
    root->left=new Node(3);
    root->left->right=new Node(34);
    root->left->left=new Node(65);
    root->right=new Node(5);
    preorder(root);




return 0;
}