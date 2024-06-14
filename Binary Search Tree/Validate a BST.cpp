bool isBST(TreeNode* root,long long int min,long long int max){
    if(root==NULL){
        return true;
    }
    if(min==max){
        return false;
       }
       if(root->val >= min && root->val<= max){
            bool left= isBST(root->left, min, root->val);
            bool right= isBST(root->right, root->val, max);
            return left && right;
       }
       else{
        return false;
       }
    }
    bool isValidBST(TreeNode* root) {
        //base case
        if(root==NULL){
            return true;
        }
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        bool ans= isBST(root, INT_MIN,INT_MAX);
        return ans;
    }
