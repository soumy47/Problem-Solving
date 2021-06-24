class Solution {
public:
   
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        
        int n = strs.size();
        
        unordered_map<string, vector<string>> mp;
        for(auto s : strs)
        {
            string t = s;
            
            sort(t.begin(), t.end());
            
            mp[t].push_back(s);
            
        }
        
        for(auto s : mp)
        {
            res.push_back(s.second);
        }
        
        return res;
    }
};
