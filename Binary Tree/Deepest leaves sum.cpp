    int height(TreeNode* node){
            if(node==NULL){
                return 0;
            }
            int left= height(node->left);
            int right=height(node->right);
            int ans=max(left, right)+1;
            return ans;
    }
    void solve(TreeNode* root, int level,int &ans,int height){
        if(root==NULL){
            return ;
        }
        if( level==height){
            ans+= root->val;
            cout<<root->val<<endl;
        }
        
        solve(root->left,level+1,ans,height);
        solve(root->right,level+1,ans, height);
    }
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int ans=0;
        int hgt=height(root);
        solve(root,1,ans, hgt);
        return ans;
    }
