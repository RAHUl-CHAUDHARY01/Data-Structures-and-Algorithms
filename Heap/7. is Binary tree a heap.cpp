 int countnodes(struct Node* tree){
      if(tree==NULL){
          return 0;
      }
      return 1 + countnodes(tree->left)+ countnodes(tree->right);
  }
  bool isCBT(struct Node* tree,int index,int total){
      if(tree==NULL){
          return true;
      }
      if(index>= total){
          return false;
      }
      return isCBT(tree->left,2*index+1, total) && isCBT(tree->right, 2* index +2, total);
  }
  bool ismaxOrder(struct Node* tree){
    //leaf node
      if(tree->left==NULL && tree->right==NULL){
          return true;
      }
    // left node exist only
      if(tree->right==NULL){
          return (tree->data > tree->left->data);
      }
      else
      return (tree->data >= tree->left->data)&&(tree->data >= tree->right->data) && ismaxOrder(tree->left) && ismaxOrder(tree->right); 
  }
    bool isHeap(struct Node* tree) {
        if(tree==NULL){
            return true;
        }
        int total= countnodes(tree);
        return isCBT(tree, 0, total)&& ismaxOrder(tree);
    }
