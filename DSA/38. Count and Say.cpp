class Solution {
public:
    string countAndSay(int n) {
        
        if(n == 1)
            return "1";
        
        string s = countAndSay(n-1);
        int count = 1;
        int m = s.size();
        string temp;
            for(int i = 1; i<s.size(); i++)
            {
                if(s[i-1] == s[i])
                {
                    count++;
                }
                else{
                    temp += (count+'0');
                    temp += s[i-1];
                    count = 1;
                }
            }
            temp += count + '0';
            temp += s[m-1];
            s = temp;
        
        return s;
    }
};
