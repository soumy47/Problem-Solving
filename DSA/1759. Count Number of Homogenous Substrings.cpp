class Solution {
public:
    int countHomogenous(string s) {
        int n = s.size();
        int ans = 1;  int count = 1;
        char prev = s[0];
        
        int mod = 1e9 +7;
        for(int j = 1; j<n; j++)
        {
            count = prev == s[j] ? count + 1 : 1;
            prev = s[j];
            
            ans = (ans + count ) % mod;
        }
        return ans;
    }
};
