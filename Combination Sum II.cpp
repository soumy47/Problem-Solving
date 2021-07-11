class Solution {
public:
    void solve(int index, vector<int>& nums, int target, vector<int> &v, vector<vector<int>> &ans)
    {
        if(target == 0)
        {
            ans.push_back(v); 
            return;
        }
        for(int i = index ; i<nums.size() ; i++)
        {
            if(i > index  && nums[i] == nums[i-1])
                continue;
            
            if(nums[i] > target)
                break;
            
            v.push_back(nums[i]);
            
            solve(i+1 ,nums, target - nums[i], v, ans);
            
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> v;
        
        solve(0, nums, target, v,ans);
        return ans;
    }
};
