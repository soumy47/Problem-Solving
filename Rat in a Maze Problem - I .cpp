class Solution{
    public:
    void solve(int i, int j, vector<vector<int>> &m, int n, string res, int *di, int *dj ,vector<string> &ans, vector<vector<int>> &vis)
    {
        if(i == n-1 && j==n-1)
        {
            ans.push_back(res);
            return;
        }
        
        string s = "DLRU";
        for(int idx =0; idx< 4; idx++){
            
            int dx = i + di[idx];
            int dy = j + dj[idx];
            if(dx>=0  && dy >=0  && dx < n && dy <n && !vis[dx][dy] && (m[dx][dy]==1))
            {
                vis[i][j] = 1;
                solve(dx, dy, m, n, res+s[idx], di, dj, ans, vis);
                vis[i][j] = 0;
            }
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int>(n, 0));
      
        int di[] = {1, 0, 0, -1};//DLRU
        int dj[] = {0, -1, 1 , 0};
        
        if(m[0][0] == 1)
        {
            solve(0, 0, m, n,"", di, dj, ans, vis);
        }
        return ans;
    }
};
