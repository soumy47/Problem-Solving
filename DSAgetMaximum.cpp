class Solution {
public:
    void solve(vector<int> &v, int n)
    {
        v[0] = 0;
        v[1] = 1;
        for(int i = 2; i<n; i++)
        {
            v[i] =  v[i/2]  + v[(i/2) +1]  * (i & 1);
        }
    }
    int getMaximumGenerated(int n) {
        if(n==0  || n==1)
            return n;
        vector<int> ans(n+1);
        solve(ans, n+1);
        return *max_element(ans.begin(), ans.end());
    }
};
