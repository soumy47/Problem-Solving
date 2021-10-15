class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int ans = INT_MIN;
            
        int maxGain[n];
        
        int maxi = values[n-1] - (n-1);
        
        maxGain[n-1] = 0;
        
        for(int i = n-2; i>=0; i--)
        {
            maxGain[i] = maxi;
            if(maxi < values[i] - i)
            {
                maxi  = values[i] - i;
            }
        }
        
        for(int i = 0; i< n -1 ; i++)
        {
            int score = values[i] + i + maxGain[i];
            ans = max(ans, score);
        }
        return ans;
    }
};
