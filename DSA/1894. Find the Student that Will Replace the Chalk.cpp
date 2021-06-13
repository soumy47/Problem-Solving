class Solution {
public:
    int chalkReplacer(vector<int>& a, int k) {
        int i =0;
        int ans;
        int n = a.size();
       long long sum = 0;
       for(int i=0;i<n;i++)
       {
           sum+=a[i];
       }
        k = (long long)k % sum;
        for(int i=0;i<n;i++)
        {
            if(a[i] > k )
            {
                ans = i;
                break;
            }
            else{
                k -= a[i];
            }
        }
        
        return ans;
    }
};
