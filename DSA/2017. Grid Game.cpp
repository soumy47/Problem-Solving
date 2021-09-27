class Solution {
public: 
    long long gridGame(vector<vector<int>>& grid) {
           long long n = grid[0].size(), up = 0, low = 0;
    
            for(int j = 0; j< n; j++)
            {
               up += grid[0][j];
            }
        
            long long mini = LONG_MAX;
            low  = 0;
            for(int j = 0; j<n; j++)
            {
                up -= grid[0][j];
                
                mini = min(mini, max(up , low));
                
                low +=  grid[1][j]; 
            }
         return mini;
    }
};
