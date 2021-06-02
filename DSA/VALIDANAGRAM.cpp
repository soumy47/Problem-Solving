class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n != m)
            return false;
        map<int,int> mp(27);
        
        for(int i=0;i<n;i++){
            mp[s[i]-'a']++;
            
            mp[t[i]-'a']--;
        }
        
        
            
        for(int i=0; i<26;i++)
        {
            if(mp[i] !=0)
                return false;
        }
        return true;
    }
};
