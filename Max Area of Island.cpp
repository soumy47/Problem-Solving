class Solution {
public:
    
    void dfs(int i, int j ,int prev, int change , int &count, vector<vector<int>>& grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        
        if(i >= 0 && i < row && j>=0 &&  j<col &&  grid[i][j] == prev){
            count++;
            grid[i][j] = change;
            dfs(i + 1, j, prev, change, count, grid);
            dfs(i - 1, j, prev, change, count, grid);
            dfs(i, j + 1, prev, change, count, grid);
            dfs(i, j - 1, prev, change, count, grid);
            
        }   
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        
        int res = 0;
        for(int i = 0; i< row ; i++)
        {
            for(int j = 0; j< col ;  j++)
            {
                int count  = 0;
                if(grid[i][j] == 1)
                {
                    int prev = 1;
                    int change =2;
                    
                    dfs(i, j, prev, change, count, grid);
                    
                    res = max(res, count);
                }
            }
        }
        return res;
        
    }
};
