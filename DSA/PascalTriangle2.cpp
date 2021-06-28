class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> dp(n+1, 0);
        
        dp[0] = 1;
        
        for(int i =1; i<=n;i++)
        {
            int temp = 1;
            for(int j =1; j<=i; j++)
            {
                int carry = dp[j];
                
                dp[j] += temp;
                
                temp = carry;
            }
        }
        return dp;
        
    }
};
