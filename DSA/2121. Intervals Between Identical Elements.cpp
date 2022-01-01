class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        int n = arr.size(); 
        map<long long , vector<long long>> mp;
        long long sum = 0;
        vector<long long> ans(n , 0) ,pre(n, 0), suf(n, 0);
        for(int i = 0; i<  n; i++)
        {
            mp[arr[i]].push_back(i);
        }
        
        for(auto i : mp)
        {
            auto index =  i.second;
            int m = index.size();
            sum = index[0];
            for(int j = 1; j <m ; j++)
            {
                pre[index[j]] = abs(( j *  index[j] ) - (sum));
                sum += index[j];
            }
        }
        for(auto i : mp)
        {
            auto index = i.second;
            int m = index.size();
            sum = index[m - 1];
            for(int j = m-2; j>=0; j--)
            {
                suf[index[j]] =  abs((m - j - 1 ) * index[j] - sum);
                sum += index[j];
            }
        }
        
        
       
        
        for(int i = 0; i< n ; i++)
        {
            cout<< i<<" : "<< pre[i]<<" "<<suf[i]<<"\n";
            ans[i] += (pre[i] + suf[i]);
        }
        
        return ans;
    }
};
