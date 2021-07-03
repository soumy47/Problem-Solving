class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0]; 
        int local = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
               local += nums[i];
            
               if(local > maxi)
               {
                   maxi = local;
               }
                if(local < 0)
                local = 0;              // As -ve no.s add no value to the sum
        }
        return maxi;
    }
};
