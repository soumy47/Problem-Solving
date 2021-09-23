class Solution {
public:
    
    /*int solve(int index, vector<int> &nums, vector<int> &dp)
    {
        int n = nums.size();
        
        if(index >= n)
            return 0;
        if(dp[index] != -1)
                return dp[index];
        
        return dp[index] =  max(nums[index] + solve(index + 2, nums, dp),  solve(index + 1, nums, dp));
        
        ////method 2
         
         vector<int> store(n + 1);
         store[0] = 0;  // when there is no house  ==> 0 money is robbed;
         
         store[1] = nums[0];  // only 1 house is present
         
        for(int i = 1; i < n ; i++)
        {
            store[i+1] = max(store[i - 1] + nums[i], store[i]);
        }
     
     return store[n];
        
        
    }*/
    
     int rob(vector<int>& nums) {   
     int n = nums.size();
         
         if(n  == 1)
             return nums[0];
         if(n  == 2)
                return max(nums[0], nums[1]);
         
         
       //  vector<int> store(n + 1);
        int prev2 = 0;  // when there is no house  ==> 0 money is robbed;
         
        int prev1 = nums[0];  // only 1 house is present
         
        int curr = 0;
        for(int i = 1; i < n ; i++)
        {
            curr = max(prev2 + nums[i], prev1);
            prev2 = prev1;
            prev1 = curr;
        }
     
     return curr;
    }
};
