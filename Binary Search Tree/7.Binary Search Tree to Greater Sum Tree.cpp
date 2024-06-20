    void rinorder(TreeNode* root, int &sum)
    {
        if(root==NULL) return;

        rinorder(root->right, sum);
        sum+=root->val;
        root->val = sum;
        rinorder(root->left, sum);
    }

    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        rinorder(root, sum);

        return root;
    }
