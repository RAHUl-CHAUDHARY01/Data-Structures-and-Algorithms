#APPROACH1:
int height(Node * root){
  if(root==NULL){
      return 0;
  }
  int left=height(root->left);
  int right=height(root->right);
  int ans=max(left,right)+1;
  return ans;
}
int diameter(Node * root){
    if(root==NULL){
        return 0;
    }
    int op1=diameter(root->left);
    int op2=diamter(root->right);
    int op3=height(root->left) +height(root->right);
    int ans= max(op1,max(op2,op3));
    return ans;
}

#APPROACH 2:
pair <int,int> diameterFirst(Node * root){
    if(root==NULL){
        pair <int,int> p=make_pair(0,0);
        return 0;
    }
    pair <int,int> left= diameterFirst(root->left);
    pair <int,int>  right=diameterFirst(root->right);
    int op1=left.first;
    int op2=right.first;
    int op3=left.second + right.second +1;
    pair <int,int> ans;
    ans.first= max(op1,max(op2,op3));
    ans.second=max(left.second, right.second)+1;
    return ans;
}
int diameter(Node * root){
    return diameterFirst(root).first;
}
