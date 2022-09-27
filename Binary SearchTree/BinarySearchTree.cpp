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

// finding maximum value in binary search tree
Node* maxvalue(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
    
}
// finding minimum value in binary search tree
//
Node* minvalue(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
    
}

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
void insert(Node *root ,int val){
    if(root==NULL){
        return new Node(val);

    }

    if(root->data>val){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);

    }
    return root;



}

Node* deleteFromBst(Node* root,int val){
    //base case
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        // 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }    



        //1 child

        //left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        // right child
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }





        //2 child

        if(root->left!=NULL && root->right!=NULL){
            int mini=minvalue(root->right);
            root->data=mini;
            root->right=deleteFromBst(root->right,mini);
            return right;


        }



    }
    else if(root->data>val){
        root->left=deleteFromBst(root->left,val);
        return root;
    }
    else if(root->data<val){
        root->right=deleteFromBst(root->right,val);
        return root;
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