class Solution {
public:
    int findMin(vector<int>& nums) {

        int mini = nums[0];
        
        int n =nums.size();
        for(int  i= 1;i<n ;i++)
        {
            if( nums[i] < mini)
            {
                mini = nums[i];
            }
        }       
        return mini;
    }
};
