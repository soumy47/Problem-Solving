class Solution {
public:
    void solve(int index, int target,vector<int>& nums,vector<int>& v,vector<vector<int>> &ans)
    {
        if(target == 0)
        {
            ans.push_back(v);
            return;
        }
        if( target < 0  || index >= nums.size())
            return;
        
        if(nums[index] <= target)
        {
            v.push_back(nums[index]);
            
            solve(index,  target - nums[index],   nums, v, ans );
            
            v.pop_back();
            
        }
        solve(index + 1, target, nums, v, ans);
        
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(0,target, nums, v,ans);
        return ans;
    }
};
