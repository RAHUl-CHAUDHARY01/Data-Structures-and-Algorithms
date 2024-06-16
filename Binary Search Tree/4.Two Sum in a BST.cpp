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
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
    vector<int> inorder;
    int ans=0;
    traversal(root, inorder);
    int n= inorder.size();
    int i=0, j= n-1;
    while(i!=j){
        if((inorder[i]+inorder[j])==target){
            ans=1;
            break;
        }
        else if((inorder[i]+inorder[j])>target){
            j--;
        }
        else{
            i++;
        }
    }
    return ans;
    }
