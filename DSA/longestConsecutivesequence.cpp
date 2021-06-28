class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() ==0)
            return 0;
        set<int> s;
      
        for(auto num : nums)
        {
            s.insert(num);
        }
        
        int ans = 0;
        for(int num : nums)
        {
            int count = 1;
            if(s.find(num-1) == s.end())
            {
                while(s.find(num+1) != s.end())
                {
                    num = num+1;
                    count++;
                }
            }
            ans = max(ans, count);
            
        }
        return ans;
    }
};
