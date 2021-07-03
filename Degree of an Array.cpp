class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
            int n = nums.size();
             map<int, int> mp;
             for(auto i : nums){
                 mp[i]++;
             }
             int freq = -1;
        
            int ele = 0;
            for(auto i : mp){
                if(freq < i.second)
                {
                    freq = i.second;
                    ele = i.first;
                }
            }
        
            map<int,int> right, left;
        
            for(int i= 0;i<n;i++)
            {
                left[nums[i]] = -1;
            }
            
            for(int i =0;i<n;i++)
            {
                if(left[nums[i]] == -1)
                    left[nums[i]] = i;
                right[nums[i]] = i;
            }
            
            int ans = n+10;
            
            for(int i = 0 ; i<n ;i++)
            {    
                 if( mp[nums[i]] == freq && (right[nums[i]]-left[nums[i]]+1) < ans)
                    ans = right[nums[i]]-left[nums[i]]+1;
            }
        return ans;
        
    }
};
