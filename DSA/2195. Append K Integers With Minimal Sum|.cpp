class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
    
        long long K = k, res = K * ( K + 1)/2;
        
        for(int i : set<int>(begin(nums), end(nums)))
        {
            if(i <= K)
            res += (++K - i);
        }
        return res;
    }
};
