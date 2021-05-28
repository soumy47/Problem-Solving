                                       33. Search in Rotated Sorted Array

int search(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int low = 0;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[0] <= nums[mid]){
                if(nums[0] <= target && target <= nums[mid])
                {
                    high = mid - 1;
                }
                else{
                    low = mid+1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
    int main(){
      vector<int> v = {4,5,6,7,0,1,2};
      cout<<search(v, 3);
    
    return 0;
    }
