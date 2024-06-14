     int height(Node* node){
        if(node== NULL){
            return 1;
        }
        int left= height(node->left);
        int right= height(node->right);
        int ans= max(left,right)+1;
        // int ans=(left==right)?1: 0; 
        return ans;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *node){
        if(node == NULL){
            return true;
        }
        bool left= isBalanced(node->left);
        bool right= isBalanced(node->right);
        bool diff= abs(height(node->left)-height(node->right))<=1;
        if(left && right && diff){ 
            return true;
        }
        return false;
    }
