class Solution {
public:
    int solve(vector<int>& coins,int n, int amount)
    {
        int t[n+1][amount+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=amount;j++)
            {
                if(j==0)
                  t[i][j]=0;  
                
                if(i == 0)
                 t[i][j] =INT_MAX-1;   
            }
        }
        for(int i=1;i<=amount;i++)
        {
            if(i % coins[0] == 0)
              t[1][i] = i / coins[0];
            else
                t[1][i] = INT_MAX-1;
        }
        
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1] <= j)
                {
                    t[i][j] = min(1+ t[i][j-coins[i-1]]  , t[i-1][j]);
                }
                else
                    t[i][j] = t[i-1][j];
            }
        }  
        cout<<INT_MAX<<" ";
        if(t[n][amount] == INT_MAX || t[n][amount] == INT_MAX-1)
            return -1;
        else
            return t[n][amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        
        return solve(coins,coins.size(), amount);
    }
};
