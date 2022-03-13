#include <bits/stdc++.h>
using namespace std;
struct Node 
{
    int data;
    struct Node *left;
    struct Node * right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
  
};


int hieght(Node * root){
    if (root==NULL){
        return 0;
    }
    int l=hieght(root->left);
    int r=hieght(root->right);
    return max(l,r)+1;

}

int main(){

      struct Node *root=new Node(1);
    root->left=new Node(3);
      root->left->left=new Node(3);
    root->left->right=new Node(5);
    


return 0;
}