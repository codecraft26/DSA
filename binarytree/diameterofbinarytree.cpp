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

    // optimization

     pair<int,int> diameterfast(Node* root) {
        // Your code here
        if(root==NULL){
            pair<int,int> p=make_pair(0,0);
            return p;
        }
          pair<int,int> left=diameter(root->left);
          pair<int,int> right=diameter(root->right);
          
          int op1=left.first;
          int op2=right.first;
          int h=left.second+right.second+1;
          
          
        
        pair<int,int> ans;
        ans.first=max(op1,max(op2,h));
        ans.second=max(left.second,right.second)+1;
        return ans;
        
        
        
    }