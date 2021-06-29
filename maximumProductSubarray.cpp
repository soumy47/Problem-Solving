class Solution {
public:
    
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==1)
            return  nums[0]; 
        
        int Max, Min, res;
        Max = Min = res = nums[0];
        
        for(int i = 1; i<n; i++)
        {
           if(nums[i]  < 0 )
               swap(Max, Min);
            
            Max = max(nums[i], Max* nums[i]);
            Min = min(nums[i], Min* nums[i]);
            
            res = max(res, Max);
        }
        return res;
    }
};
