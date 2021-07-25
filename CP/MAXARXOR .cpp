   #include<bits/stdc++.h> 
            using namespace std;
            #define mod 1e9 + 7
            #define RUN 10
          
            typedef long long ll;

            ll solve(ll n , ll r)
            {
                ll res = n;
                for(int i = 0; i< r ; i++)
                {
                        res *= (res - i);
                        res /= (res + 1);
                }
                return res;
            }
            int main()
            {     
                
                ios_base::sync_with_stdio(false);
                cin.tie(NULL);       
                int t;
                cin>>t;

                while(t--)
                {
                    ll n, k;
                    cin>>n>>k;

                    n = (1<<n);
                    ll sum = 0;
                    sum = ((n - 1)  * 2) * min(n/2, k);
                    cout<<sum;
                    cout<<"\n"; 
                }
                return 0;   
            }
