class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        
        int n = nums.size();
        int sum = 0;
        for(int i =0;i<n ;i++)
        {
            sum += nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};
