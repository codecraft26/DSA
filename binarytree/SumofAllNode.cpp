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

int sumOfNode(Node *root){
    if(root==NULL){
        return 0 ;
    }
    return sumOfNode(root->left)+sumOfNode(root->right)+root->data;
}

int main(){
    
        Node* node1 = new Node(10);
    Node* root=node1;
    root->left=new Node(3);
    root->left->right=new Node(34);
    root->left->left=new Node(65);
    root->right=new Node(5);
    cout<<sumOfNode(root);

return 0;
}