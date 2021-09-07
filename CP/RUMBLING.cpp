#include<bits/stdc++.h>
            using namespace std;
            #define mod 1e9 + 7
            #define RUN 10 
            #define pie 3.1415926536
            typedef long long ll;

            bool cmp(pair<ll, ll> a, pair<ll, ll> b)
            {
                return a.second < b.second;
            }
            int main()
            {             
                    ios_base::sync_with_stdio(false);
                    cin.tie(NULL);
                    int t;
                   cin>>t;
                   while(t--) 
                    { 
                       // cout<<t<<" == t\n";
                       ll n ;
                       cin>>n;
                       string s;
                       cin>>s;

                        ll x, y;
                        cin>>x>>y;

                        ll e[n + 1], w[n + 1];
                        memset(e, 0, sizeof(e));
                        memset(w, 0, sizeof(w));

                        // all east
                        for(int i = 0; i< n ;i++)
                        {
                           ll val = 0;
                            if(s[i] == 'N')  
                            {
                                val = min(x, 3 * y);
                            }
                            if(s[i] == 'S')
                            {
                                val = min( y, 3 *  x);
                            }
                            else if( s[i] == 'W') 
                            {
                                val = min(2 * x, 2 * y); 
                            }
                            
                        
                            if(i == 0)
                                e[i] = val;
                            else{
                                e[i] = val + e[i - 1];
                            }
                          // cout<<e[i]<<" ";
                        }
                       // cout<<"\n";
                        //all west
                        for(int i = 0; i< n ;i++)
                        {
                            ll val = 0;
                            if(s[i] == 'N')  
                            {
                                val = min(y, 3 * x);
                            }
                            if(s[i] == 'S')
                            {
                                val = min(3 * y, x);
                            }
                            else if( s[i] == 'E') 
                            {
                                val = min(2 * x, 2 * y); 
                            }

                            if(i == 0)
                                w[i] = val;
                            else{
                                w[i] = val + w[i - 1];
                            }
                       
                        }
                  
                        ll mini = min(e[n-1], w[n - 1]);

                        for(int i = 0; i < n; i++)
                        {
                            ll val = (e[i] + w[n-1] - w[i]);
                            mini = min(mini, val);
                          

                        }
                       cout<<mini;


                       cout<<"\n";
                    }
               return 0;   
            }
