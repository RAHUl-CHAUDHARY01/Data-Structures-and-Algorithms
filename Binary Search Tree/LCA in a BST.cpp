TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  //base case
        if(root==NULL){
            return NULL;
        }
  // lca is in left side of root
        if(root->val > p->val && root->val > q->val){
            return lowestCommonAncestor(root->left,p,q);
        }
  //lca is in right side of root
        if(root->val < p->val && root->val < q->val){
            return lowestCommonAncestor(root->right,p,q);
        }
  // root is the lca
        return root;
}
