class Solution {
public:
    
  /*  bool solve(vector<int> &arr, int index , int start, vector<bool> &myans)
    {
         int n = arr.size();
        if(arr[index] == 0)
            return true;
            
       if(myans[index] == true)
                return true;
         if(index >= n || index< 0)
             return false;
        
        int right = index + arr[index];
        int left = index - arr[index];
     
        bool x = (right < n  &&  right != start) ?solve(arr, index + arr[index], start, myans) : false;
        
        bool y = (left >=0   && left != start) ?solve(arr, index - arr[index], start, myans) : false;
        
        return myans[index] = x || y;
    }*/
  
    bool canReach(vector<int>& arr, int start) {
      int n = arr.size();
        int i = start;
        return start >= 0  && start< n  && arr[i] >=0  && (!(arr[i] = -arr[i]) || canReach(arr, start - arr[start]) || canReach(arr, start + arr[start]));
    }
};
