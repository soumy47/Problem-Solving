class Solution {
public:
    string makeFancyString(string s) {
        
        string ans;
        map<char, int> mp;
        char prev = s[0];
        ans += s[0];
        mp[s[0]]++;
        for(int i = 1; i< s.size(); i++){
            if(s[i] == prev)
            {
                ++mp[prev];
                if(mp[prev] < 3)
                {
                    ans += prev;
                }
                else{
                    continue;
                }
            }
            else{
                ++mp[s[i]];
                ans += s[i];
                mp[s[i-1]] = 0;
                prev = s[i];
            }
        }
        return ans;
    }
};
