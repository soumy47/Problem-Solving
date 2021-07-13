    #include<bits/stdc++.h> 
        using namespace std;
        #define mod 1e9 + 7
        
        typedef long long int ll;
        typedef vector<int> vi;
        typedef pair<int, int> pi;
        
        typedef long long ll;
        bool cmp(pair<int, int> a , pair<int, int> b)
        {
            return a.first > b.first;
        }
        void solve()
        {
            ll n;
            cin>>n;      
                   // cout<<"\n";
            ll a[n], b[n];
            ll sum1 =0, sum2 = 0;
            for(int i =0;i<n;i++)
            {
                cin>>a[i];
                sum1 += a[i];
            }
            for(int i =0; i<n; i++)
            {
                cin>>b[i];
                sum2+=b[i];
            }
          //  cout<<sum1<<" "<<sum2<<"\n";
            if(sum1 != sum2)
            {
               cout<<-1<<"\n";
               return;
            }
            vector<pair<int, int>> res;
            for(int i = 0;i<n ;i++){
     
                for(int j =0;j<n;j++)
                {
                    while(a[i] > b[i] && a[j] < b[j])
                    {
                        a[i]--;
                        a[j]++;
                        res.push_back({i+1,j +1});
                    }
                }
            }
            cout<<res.size()<<"\n";
            for(auto it : res)
            {
                cout<<it.first<<" "<<it.second<<"\n";
            }
            return;
        }
     
        int main()
        {     
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);       
            int t;
            cin>>t;
            while(t--)
            {
                solve();
            }
            return 0;   
        }
