  vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        map<int,int> nodes;
        queue<pair<Node*,int>> q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<Node*,int> temp=q.front();
            q.pop();
            Node* frontnode= temp.first;
            int hd=temp.second;
             nodes[hd]=frontnode->data;
            if(frontnode->left){
                q.push(make_pair(frontnode->left, hd-1));
            }
            if(frontnode->right){
                q.push(make_pair(frontnode->right,hd+1));
            }
        }
        for(auto i: nodes){
            ans.push_back(i.second);
        }
        return ans;
    }
