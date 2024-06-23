 void traverse(Node *root,vector<Node*> &ans){
        if(root==NULL){
            return ;
        }
        traverse(root->left, ans);
        ans.push_back(root);
        traverse(root->right,ans);
    }
    void populateNext(Node *root)
    {
        if(root==NULL){
            return ;
        }
        vector<Node*> ans;
        traverse(root,ans);
        for(int i=0;i<ans.size()-1;i++){
            ans[i]->next= ans[i+1];
        }
    }
