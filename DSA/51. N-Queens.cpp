class Solution {
public:
    void solve(int col, vector<string> &b, vector<int> &left, vector<int> &up, vector<int> &down,  vector<vector<string>> &res)
    {
        int  n = b.size(); 
        if(col == b.size()){
            res.push_back(b);
            return;
        }
        
        for(int i =0;i<n;i++)
        {
             if(left[i] ==0 && up[(n-1) + (col - i)] == 0  &&  down[col+i]==0  ){
                 
                 b[i][col] = 'Q';
                 left[i] = 1;
                 up[(n-1) + (col- i)] =1;
                 down[col+i] = 1;
                 
                 solve(col+1, b, left, up, down, res);
                 
                 b[i][col] = '.';
                 left[i] = 0;
                 up[(n-1) + (col- i)] = 0;
                 down[col+i] = 0;
             }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n);
        string s(n, '.');
        for(int i =0; i<n;i++)
        {
            board[i] = s;
        }
        
        vector<int> left(n, 0);
        vector<int> up(2*n-1, 0), down(2*n-1, 0);
        
        solve(0, board, left, up, down, res);
        return res;
    }
};
