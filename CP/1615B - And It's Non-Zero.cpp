 #include<bits/stdc++.h>
                using namespace std;

                typedef long long ll;
                const ll mod = 1e9 + 7,inf = 1e18;
                #define pie 3.1415926536

                int main()
                {             
                        // freopen("input.txt", "r", stdin);
                        //freopen("output.txt", "w", stdout);

                        ios_base::sync_with_stdio(false);
                        cin.tie(NULL);

                        vector<vector<ll>>  cnt_set_bit(33, vector<ll>(2*1e5 + 5, 0));

                      for(int i = 1 ; i<=20; i++)
                        {
                            for(int j = 1; j< (2*1e5 + 2); j++)
                            {
                                cnt_set_bit[i][j] = cnt_set_bit[i][j-1] + (j & (1 << (i - 1))? 1 : 0) ;
                            }
                            cout<<"\n";
                        }

                           

                       int t;
                       cin>>t; 
                        while(t--) 
                        {
                    
                           // ll n;
                            //cin>> n;
                            //map<ll, ll> mp;
                            //ll a[n];
                            /*for(int i= 0; i< n ; i++)
                            {
                                cin>>a[i];
                            }*/
                            ll l, r;
                            cin>>l >> r;

                            ll mx = -1;
                            for(int  i= 1; i< 20; i++)
                            {
                               // cout<< cnt_set_bit[i][r] - cnt_set_bit[i][l - 1]<<" ";
                                mx = max(mx, cnt_set_bit[i][r] - cnt_set_bit[i][l - 1]);

                            }
                           // cout<<"\n";
                            //cout<< mx<<" ";
                            ll num = (r - l) + 1;
                         cout<< (num - mx);

                        cout<<"\n";

                       }
                          return 0;
                } 
