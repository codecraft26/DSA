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

int calhieght(Node * root){
    if(root==NULL){
        return 0;

    }

    return max(calhieght(root->left),calhieght(root->right));
}
// diameter of binary tree

int diameter(Node *root ){
    if(root==NULL){
        return 0;
    }
   int l=calhieght(root->left);
   int r =calhieght(root->right);
    int currdiameter=l+r+1;
    int ld=diameter(root->left);
    int rd=diameter(root->right);
    return max(currdiameter,max(ld,rd));


}

int calculated(Node *root,int* hieght){
    if(root==NULL){
        *hieght=0;
        return 0;
    }
    int l=0,r=0;
    int ld=calculated(root->left,&l);
    int rd=calculated(root->right,&r);
    int currentdiameter=l+r+1;
    *hieght=max(l,r)+1;
    
    return max(currentdiameter,max(ld,rd));


}

int main(){

//main function
      struct Node *root=new Node(1);
    root->left=new Node(3);
      root->left->left=new Node(3);
    root->left->right=new Node(5);
    cout<<diameter(root)<<endl;
    int hieght=0;
    cout<<calculated(root,&hieght);



return 0;
}