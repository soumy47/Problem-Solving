class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int length = 0;
        int i = 0, j = 0;
        int n = s.size();
        
        vector<int> mp(257, -1);
        
        while( j < n)
        {
            if(mp[s[j]]  != -1)
            {
                i = max(i, mp[s[j]] + 1);
            }
            
            mp[s[j]] = j;
            length  = max(length, j - i + 1);
            j++;
        }
        return length;
    }
};
