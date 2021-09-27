class Solution {
public:
    
    
    int solve(int i, vector<int> &nums,int fg ,vector<vector<int>> &dp)
    {
        int n = nums.size();
        
        if(i >= n )
            return 0;
        
        
        if(i == n - 1)
        {
            if(fg == true)
                return 0;
        }
            
        if( dp[i][fg] != -1)
            return dp[i][fg];
        
        return dp[i][fg] = max(nums[i] + solve(i+2, nums,fg ,dp),  solve(i + 1 , nums, fg,  dp)); 
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 1)
            return nums[0];
      
        vector<vector<int>> dp(n+1,vector<int>(2, -1));
        bool fg = true;
        
        int including_zero = nums[0] + solve(2, nums, fg, dp);
        int without_zero = solve(1, nums, !fg ,dp);
        
        return max(including_zero, without_zero);
    }
};
