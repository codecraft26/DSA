#include <bits/stdc++.h>
using namespace std;
// preorder aur inorder se hme ek tree banani h okk 
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
int search(int inorder[],int start,int end ,int curr){
    for(int i= start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }

    }
    return -1;

}
Node* buildTree(int preorder[],int inorder[],int start,int end ){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    Node* node=new Node(curr);
    if(start==end){
        return node;
    }
    int pos=search(inorder,start,end,curr);
    node->left=buildTree(preorder,inorder,start,pos-1);
    node->right=buildTree(preorder,inorder,pos+1,end);
    return node ;

}
void inorderprint(Node* root){
    
    if(root==NULL){
        return ;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);

}



int main(){
    
       int preorder[]={1,2,4,3,5};
       int inorder[]={ 4,2,1,5,3};
       Node* root= buildTree(preorder,inorder,0,4);
       inorderprint(root);




return 0;
}