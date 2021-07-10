class Solution {
public:
    int numSub(string s) {
        int n = s.size();
        
        int mod = 1e9+7;
        long long  count = 0;
        long long res = 0;
        for(int i =0;i<n;i++)
        {
            if(s[i] == '1')
                count++;
            
            else {
                res = res + ((count * (count + 1)) /  2);
                count = 0;
            }
            
        }
        if( count != 0)
        {
             res = res + ((count * (count + 1)) /  2);
        }
        return res % mod;
    }
}
