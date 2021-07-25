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
                    ll a, b;
                    cin>>a>>b;

                    ll res = 1;

                    while(a/b >=1)
                    {
                        a = a/ b;
                        res++;
                    }
                    cout<<res;
                    cout<<"\n";        
                                   
                }
                return 0;   
            }
