class Solution {
public:
    
    int merge(vector<int>& v, int low, int mid ,int high)
    {
        int count = 0;
        int j = mid + 1; // right array
        
        for(int i = low; i<= mid; i++)
        {
            while( j <= high  && v[i] > 2LL*v[j])
                j++;
            count += (j - (mid + 1));
        }
        
        vector<int> temp;
        int i = low;
        j = mid+1;
     
        
        while(i<= mid && j <=high)
        {
            if(v[i] <= v[j]){
                temp.push_back(v[i++]);
            }
            else{
                temp.push_back(v[j++]);
            }
        }
        while(i <= mid)
        {
            temp.push_back(v[i++]);
        }
        while(j <= high){
            temp.push_back(v[j++]);
        }
        
        for(int i = low; i<=high ; i++)
        {
            v[i] = temp[i- low];
        }
        
        return count;
    }
    
    int mergesort(vector<int> &v, int low, int high){
        if(low < high)
        {
            int mid =  (low + high) >> 1;
            int count = mergesort(v, low, mid);
            count += mergesort(v, mid+1, high);
            count += merge(v, low, mid, high);
            return count;
            
         }   
        return 0;
    }
        
    int reversePairs(vector<int>& nums) {
        return mergesort(nums, 0, nums.size() - 1);
    }
};
