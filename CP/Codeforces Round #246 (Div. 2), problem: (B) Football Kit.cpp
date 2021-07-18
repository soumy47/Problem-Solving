     #include<bits/stdc++.h> 
            using namespace std;
            #define mod 1e9 + 7
            #define RUN 10
          
            typedef long long ll;
         
          
            int main()
            {     
                ios_base::sync_with_stdio(false);
                cin.tie(NULL);       
               // int t;
               // cin>>t;
                //while(t--)
                //{
                  
                    ll n;
                    cin>>n;
     
                    unordered_map<ll,ll> home;
                    vector<pair<ll ,ll>> a(n);
                    for(int i = 0; i < n; i++)
                    {
                            ll x, y;
                            cin>>x>>y;
                            a[i] = {x, y};
                            home[x]++;
                    }
                    for(int i =0; i< n;i++)
                    {
     
                         ll H = n-1;
                         ll A = n-1;
     
                         if(home.find(a[i].second)!= home.end())
                         {
                            H += home[a[i].second];
                            A -= home[a[i].second];
                         }
                         cout<<H<<" "<<A<<"\n"; 
                    }
                //}
                return 0;   
            }

