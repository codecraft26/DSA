 private:
         pair <bool,int> isBalancedfast(Node* root){
              //  Your Code here
        if(root==NULL){
            
            pair<bool,int> p=make_pair(true,0);
            
            return p;
        }
        pair<int,int> left=isBalancedfast(root->left);
        pair<int,int> right=isBalancedfast(root->right);
        bool leftans=left.first;
        bool rightans=right.first;
        bool diff=abs(left.second-right.second)<=1;
        pair<bool,int> ans;
        ans.second=max(left.second,right.second)+1;
        if(left && right && diff){
          ans.first=true;
        }
        else{
            ans.first=false;
        } 
        
     
        
     return ans;
     
             
             
         }
         
         
         
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
    return    diameterfast(root);
      
    }