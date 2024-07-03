//User function Template for C++

class Node{
    public:
    int data;
    int row;
    int col;
    Node(int data,int y, int z){
        this->data= data;
        row=y;
        col=z;
    }
};
class compare{
    public:
    bool operator()(Node* a,Node* b){
        return ( a->data > b->data);
    }
};
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int> ans;
        priority_queue <Node*,vector<Node*>,compare>minHeap;
        for(int i=0;i<K;i++){
            Node * temp= new Node(arr[i][0],i,0);
            minHeap.push(temp);
        }
        while(minHeap.size()>0){
            Node* temp= minHeap.top();
            ans.push_back(temp->data);
            minHeap.pop();
            int i= temp->row;
            int j=temp->col;
            if(j+1< K){
                Node * next= new Node(arr[i][j+1],i,j+1);
                 minHeap.push(next);
            }
           
        }
        return ans;
        
    }
};
