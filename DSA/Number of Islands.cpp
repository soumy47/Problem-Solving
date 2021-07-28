class Solution {
public:
    
    void markIsland(int i ,int j , char prev, int change, vector<vector<char>>& grid){
        int row = grid.size();
        int col = grid[0].size();
        if( i>=0 && i <row && j >=0 && j < col &&  grid[i][j] == prev)
        {
            grid[i][j] = change;
            markIsland(i + 1, j, prev, change, grid);   
            markIsland(i - 1, j, prev, change, grid);   
            markIsland(i, j + 1, prev, change, grid);   
            markIsland(i, j - 1, prev, change, grid);   
        }
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
    
        int row = grid.size();
        int col = grid[0].size();
        
        int count = 0;
        for(int i = 0 ; i< row; i++)
        {
            for(int j = 0; j< col ; j++)
            {
                if(grid[i][j] =='1')
                {
                    count++;
                    markIsland(i, j, '1', '*', grid);   
                }
            }
        }
        return count;
        
    }
};
