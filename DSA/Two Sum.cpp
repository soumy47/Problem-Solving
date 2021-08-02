class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        
        int n = nums.size();
        map<int, int> mp;
        
        for(int i = 0;i < n; i++)
        {
            int val = target - nums[i];
            if(mp.find(val) != mp.end())
            {
                int index =  mp[val];
                ans[0] = i;
                ans[1] = index;
                break;
            } 
            mp[nums[i]] = i;
        }
        return ans;
    }
};
