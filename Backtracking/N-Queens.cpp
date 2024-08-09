class Solution {
public:
    bool safe(int n,vector<string> board,int row,int col){
    int rowtemp=row;
    int coltemp=col;//temp value of col, as it will be used many time here
    while(rowtemp>=0 && coltemp>=0){
        if(board[rowtemp][coltemp]=='Q'){
            return false;
        }
        rowtemp--;
        coltemp--;
    }
    coltemp=col;
    rowtemp=row;
    while(coltemp>=0){
        if(board[rowtemp][coltemp]=='Q'){
            return false;
        }
        coltemp--;
    }
    coltemp=col;
    while(rowtemp<n && coltemp>=0){
        if(board[rowtemp][coltemp]=='Q'){
            return false;
        }
        rowtemp++;
        coltemp--;
    }
    return true;
}
public:
void solve(int n,int col,vector<string> &board,vector<vector<string>> &ans){
    if(col==n){
        ans.push_back(board);
        return ;
    }
    for(int row=0;row<n;row++){
        if(safe(n,board,row,col)){
            board[row][col]='Q';
            solve(n,col+1,board,ans);
            board[row][col]='.';
        }
    }
}
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;// store all the solutions
        vector<string> board(n);// store the values of the cordinate;
        string s(n,'.');
        for(int i=0;i< n;i++){
            board[i]=s;//giving initial values to the board (all empty)
        }
        int col=0;
        solve(n,col,board,ans);
        return ans;
    }
};
