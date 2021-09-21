class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        
        int n = nums.size();
        int maxi = nums[0], mini = 1e5+1, sum =  0;
        
        int mn[n];
        mn[n-1] = mn[0] =  0;
        
        mini = nums[n-1];
        for(int i = n- 2; i > 0 ; i--)
        {
            mn[i] = -1;   
            if(nums[i] < mini)
               mn[i] = mini;
            mini = min(mini, nums[i]);
        }
    
        for(int  i = 1; i<n - 1; i++)
        {
            int ele = nums[i];
            mini = mn[i];
            if(maxi < ele  &&  ele < mini)
                sum+=2;
            else if(nums[i-1] < ele && ele < nums[i + 1])
                sum += 1;
            maxi = max(maxi, ele);
        }
        return sum;
    }
};
