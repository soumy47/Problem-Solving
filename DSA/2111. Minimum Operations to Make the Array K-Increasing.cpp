class Solution {
public:
    
    int LIS(vector<int> &a)
    {
        int n = a.size();
        vector<int> lis;
        
        lis.push_back(a[0]);
        
        for(int i = 1; i< n ; i++)
        {
            if( a[i] >= lis.back())
                lis.push_back(a[i]);
            else{
                int index  = upper_bound(lis.begin(), lis.end(), a[i]) - lis.begin();
                lis[index] = a[i];
            }
        }
        for(int i : lis)
            cout<<i<<" ";
        return lis.size();
    }
    
    
    int kIncreasing(vector<int>& arr, int k) {
        int n = arr.size(), ans = 0;
          vector<int> kth;
        for(int i = 0; i< k ; i++)
        {
            //vector<int> kth;
            for(int j = i; j< n; j+=k)
            {
                kth.push_back(arr[j]);
            }
            ans+= (kth.size() - LIS(kth));
           kth.clear();
        }
        return ans;
    }
};
