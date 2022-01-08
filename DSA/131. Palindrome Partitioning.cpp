class Solution {
public:
    bool isPalindrome(string s, int l, int h)
    {
        while(l <= h)
        {
            if(s[l] != s[h])
                return false;
            l++;
            h--;
        }
        return true;
    }
    
    void solve(int index, string s,vector<string> &res ,vector<vector<string>> &ans)
    {
        int n = s.size();
        if(index == n)
        {
            ans.push_back(res);
            return;
        }
        
        for(int i = index; i< n; i++)
        {
            if(isPalindrome(s, index, i))
            {
                res.push_back(s.substr(index, i - index +1));
                solve(i +1 , s, res, ans);
                res.pop_back();   
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        int n = s.size();
        
        vector<vector<string>> ans;
        vector<string> res;
        
        solve(0, s, res, ans);
        
        return ans;
    }
};
