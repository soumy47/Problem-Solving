class Solution {
public:
    string findLPS(string s, int i , int j){
        int n = s.size();
        
        while(i>=0  &&  j < n  && s[i]== s[j])
        {
            i--;
            j++;
        }
        return s.substr(i+1, j - i -1);
    }
    
    string longestPalindrome(string s) {
        int n = s.size();
        
        string maxi = "", curr;
        int maxi_len = 0;
        for(int i = 0; i< n ; i++)
        {
            curr = findLPS(s, i , i);// for odd
            int len = curr.size();
            
            if(maxi_len < len)
            {
                maxi = curr;
                maxi_len = len;
            }
            
            curr = findLPS(s, i , i+1);// for odd
            len = curr.size();
            
            if(maxi_len < len)
            {
                maxi = curr;
                maxi_len = len;
            }
        }
        return maxi;
    }
};
