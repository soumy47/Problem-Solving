class Solution {
public:
    int maximalSquare(vector<vector<char>>& v) {
        int n = v.size();
        int m = v[0].size();
        int dp[n+1][m+1];
        memset(dp, 0, sizeof(dp));
        
        int maxi = 0;
        for(int i = 1;i <= n;i++)
        {
            for(int j =1;  j <= m ;j++)
            {
                if(v[i-1][j-1] == '1')
                {
                     dp[i][j] = min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j])) +1;
                     if(maxi < dp[i][j])
                    maxi = dp[i][j];
                } 
               
             
            }
        }
        return maxi * maxi;
    }
};
