class Solution {
public:
    int longestPalindrome(string s) {
        map<int , int> mp;
        int count = 0;
        int n = s.size();
        for(int i = 0; i< n ;i++)
        {
            mp[s[i] - '0']++;
        }
        int fg = 0;
        for(auto i : mp)
        {
            
            int add  = i.second;
           
            if((add % 2 ) == 0)
                count += add;
            else
            {
                count += (add-1);
                fg = 1;
            }
        }
        
        return ((fg == 1)? count+1 : count);
        
    }
};
