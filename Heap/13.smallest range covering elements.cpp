class Node{
    public:
    int data;
    int row;
    int col;
    Node(int d,int r,int c){
        data =d;
        row=r;
        col=c;
    }
};
class compare{
    public:
    bool operator()(Node* a,Node*b){
        return (a->data > b->data);
    }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<Node*,vector<Node*>,compare> pq;
        int mini= INT_MAX;
        int maxi= INT_MIN;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi, nums[i][0]);
            pq.push(new Node(nums[i][0],i,0));
        }
        mini= pq.top()->data;
        int start=mini, end=maxi;
        while(!pq.empty()){
            Node* temp=pq.top();
            mini= temp->data;
            pq.pop();
            //update min and max
            if(end-start > maxi-mini){
                start= mini;
                end=maxi;
            }
            //if element exists or not
            if(temp->col +1 <  nums[temp->row].size()){
                Node* element = new Node(nums[temp->row][temp->col +1] , temp->row,temp->col +1);
                pq.push(element);
                maxi=max(maxi,nums[temp->row][temp->col +1]);
            }
            else{
                break;
            }
        }
        return {start,end};

    }
};
