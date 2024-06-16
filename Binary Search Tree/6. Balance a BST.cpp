 void traversal( TreeNode* node ,vector<int> &inorder){
        if (node == NULL)
            return;
    
        // Traverse left subtree
        traversal(node->left, inorder);
    
        // Visit node
        // cout << node->data << " ";
        inorder.push_back(node->val);
    
        // Traverse right subtree
        traversal(node->right, inorder);
    }
    TreeNode* balancebst(vector<int> & in , int s, int e){
        //base case
        if(s>e){
            return NULL;
        }
      
      // find mid and make it root node
        int mid= (s+e)/2;
        TreeNode * newroot= new TreeNode(in[mid]);
      
      // handle left side of root
        newroot->left= balancebst(in, s,mid-1);
      
      //handle right side of root
        newroot->right= balancebst(in, mid+1,e);
        return newroot;

    }
    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        vector<int> inorder;
      
      // find inorder of bst
        traversal(root, inorder);
        int n= inorder.size();
      
      // create balance bst
        TreeNode* newroot= balancebst(inorder,0,n-1 );
        return newroot;
    }
