void traversal( Node* node ,vector<int> &inorder){
    if (node == NULL)
        return;
 
    // Traverse left subtree
    traversal(node->left, inorder);
 
    // Visit node
    // cout << node->data << " ";
    inorder.push_back(node->data);
 
    // Traverse right subtree
    traversal(node->right, inorder);
}
    Node *flattenBST(Node *root){
        if(root==NULL){
            return NULL ;
        }
      
      //find inorder step 1
        vector<int> inorder;
        traversal(root, inorder);

      // create a new node
        Node* newroot= new Node(inorder[0]);
        Node* curr= newroot;
        int n= inorder.size();

      //step 2
        for(int i=1;i<n;i++){
            Node* temp= new Node(inorder[i]);
            // cout<<temp->val;
            curr->left=NULL;
            curr->right=temp;
            curr=temp;
        }
      // step 3 : for the last node
        curr->left=NULL;
        curr->right=NULL;
        return newroot;
    }
