class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        map<int, int> sum;
        
        for(int i=0; i<nums.size(); i++)
        {
            sum[nums[i]] += nums[i];
        }
        
        
        int prev2 = 0;
        int prev1 = 0;
        
        for(auto nums : sum)
        {
            
            if(sum.count(nums.first - 1) == 0)
            {
                prev2 = prev1;
                
                prev1 += nums.second;
            }
            else
            {
                 int maxi = max(nums.second + prev2, prev1);

                    prev2 = prev1;

                    prev1 = maxi;
            }
            
        }
        
        return prev1;
        
    }
};
