TreeNode* minvalue(TreeNode* root){
        TreeNode* temp = root;
        while(temp->left!=NULL){
            temp= temp->left;
        }
        return temp;
}
TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        if(root->val==key){
            //0 child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            //1 child
            else if(root->left!=NULL && root->right==NULL){
                TreeNode* temp= root->left;
                delete root;
                return temp;
            }
            else if(root->left==NULL && root->right!=NULL){
                TreeNode* temp= root->right;
                delete root;
                return temp;
            }
            //2 child
            else{
                int min= minvalue(root->right)->val;
                root->val= min;
                root->right= deleteNode(root->right,min);
                return root;
            }

        }
        else if(root->val > key){
            root->left= deleteNode(root->left, key);
        }
        else{
            root->right= deleteNode(root->right ,key);
        }
        return root;
}
