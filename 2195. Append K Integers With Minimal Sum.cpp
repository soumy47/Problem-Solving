class Solution {
public:
    
    long long sum(long long n)
    {
        return (n * (n  + 1 ))/2;
    }
    long long minimalKSum(vector<int>& nums, int k) {
        long long ans = 0;
        
        int n = nums.size();
      
        int prev = 0;      
        sort(nums.begin(), nums.end());
      
        for(int i = 0; i< n; i++)
        {
            long long diff = min(k, nums[i] - prev - 1);
            if(diff >= 1)
            {
                long long temp = sum(prev + diff) - sum(prev);
                ans += temp;
                k -= diff;
            }
            prev =  nums[i];
        }
        if(k != 0)
        {
            long long temp = sum(prev + k ) - sum(prev);
            ans += temp;
        }
        
        return ans;
    }
};
