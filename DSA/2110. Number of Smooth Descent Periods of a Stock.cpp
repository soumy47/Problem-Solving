class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
        
        long long ans = 0, count = 1;
        
        for(int i = 1; i< n ; i++)
        {
            if((i-1) >=0  && (prices[i-1] -1 == prices[i]))
            {
                count++;
            }
            else{
                ans = ans + (((count) * (count+1))/2);   
                count = 1;
                cout<< ans <<"\n";
            }
        }
        ans = ans + (((count) * (count+1))/2);  
        return ans;
    }
};
