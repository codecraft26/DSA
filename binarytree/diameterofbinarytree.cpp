  private:
    int height(struct Node* root){
        // code here 
        if(root==NULL)
            return 0;
        int l=height(root->left);
        int r =height(root->right);
        return max(l,r)+1;
    }
  public:
    // Function to return the diameter of a Binary Tree.
    //longest path between two nnondes 
    int diameter(Node* root) {
        // Your code here
        if(root==NULL){
            return 0;
        }
        
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int h=height(root->left)+height(root->right)+1;
        return max(op1,max(op2,h));
        
        
        
    }