  void ToHeap(Node* root, vector<int> arr, int& i){
    if (root == NULL)
        return;
   // then recur on left subtree
    ToHeap(root->left, arr, i);
    
    // now recur on right subtree
    ToHeap(root->right, arr, i);
    // first copy data at index 'i' of 'arr' to
    // the node
    root->data = arr[i++];
}
  void inorderTraversal(Node* root, vector<int>& arr){
    if (root == NULL)
        return;
    // first recur on left subtree
    inorderTraversal(root->left, arr);
 
    // then copy the data of the node
    arr.push_back(root->data);
 
    // now recur for right subtree
    inorderTraversal(root->right, arr);
}
  void convertToMaxHeapUtil(Node* root){
    vector<int> arr;
    // inorder traversal to populate 'arr'
    inorderTraversal(root, arr);
    int i=0;
    // BST to MIN HEAP conversion
    ToHeap(root, arr, i);
  }    
