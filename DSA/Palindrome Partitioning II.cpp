class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        int res[n];
        res[0] = 0;
        for(int i = 1 ; i< n ;i++)
            res[i] = i;
        
        for(int i = 0; i<n ;i++){
            
            for(int j = 0; i-j>=0   && i+j < n && s[i-j] == s[i+j]; j++)
            {
                
                if((i - j)==0)
                {
                    res[i + j] = 0;
                }
                else {
                    res[i+ j ] = min(res[i+j], res[i - j - 1] + 1);
                }
                
            }
            for(int j = 0; i-j - 1>=0   && i+j < n && s[i-j - 1] == s[i+j]; j++)
            {
                
                if((i - j  - 1)==0)
                {
                    res[i + j] = 0;
                }
                else {
                    res[i+ j] = min(res[i+j], res[i - j - 2] + 1);
                }
                
            }
        }
        return res[n -1];
    }
};
