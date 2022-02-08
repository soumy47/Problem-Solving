class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> less, great, equal;
        int n = nums.size();
        for(int i =0;i< n ; i++)
        {
            if(nums[i] < pivot)
            {
                less.push_back(nums[i]);
            }
            else if(nums[i] > pivot)
            {
                great.push_back(nums[i]);
            }
            else
                equal.push_back(nums[i]);
        }
        
        int index = 0;
        for(int i =0; i< less.size() ; i++)
        {
            nums[index++] = less[i];
        }
        
        for(int i = 0; i< equal.size();i++)
        {
            nums[index++] = equal[i];
        }
        for(int i = 0; i< great.size();i++)
        {
            nums[index++] = great[i];
        }
        
        return nums;
    }
};
