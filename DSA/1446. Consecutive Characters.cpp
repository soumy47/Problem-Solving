class Solution {
public:
    int maxPower(string s) {
        int  n =  s.size();
        int maxi = 1;
        int count = 1;
        for(int i = 1;  i< n ; i++)
        {
            if(s[i - 1] != s[i])
            {
                count  = 1;
            }
            else
                count++;
            maxi = max(count, maxi);
        }
        return maxi;
    }
};
