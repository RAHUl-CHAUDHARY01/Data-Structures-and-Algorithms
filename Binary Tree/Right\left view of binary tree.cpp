//left view of binary tree:
void solve(Node* root,vector<int> &ans, int level){
    if(root==NULL){
        return ;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    solve(root->left, ans,level+1);
    solve(root->right,ans, level+1);
}
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root){
   vector<int> ans;
   if(root==NULL){
       return ans;
   }
   solve(root, ans,0);
   return ans;
}
//right view of binary tree:
void solve(Node* root,vector<int> &ans, int level){
    if(root==NULL){
        return ;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
    }
     solve(root->right,ans, level+1);
    solve(root->left, ans,level+1);
   
}
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
    vector<int> ans;
   if(root==NULL){
       return ans;
   }
   solve(root, ans,0);
   return ans;
    }
