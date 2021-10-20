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
                        int t;
                        cin>>t; 
                        while(t--) 
                        {
                            ll n ;
                            cin>> n;

                            ll  a[n], ans[n];
                            
                            vector<pair<ll, ll>> b(n);
                            for(int i = 0; i<  n; i++)
                            {
                                cin>>a[i];
                                b[i] = {a[i], i};
                            }

                            sort(b.begin(), b.end());

                            ll remainder = 0;

                            for( auto i : b)
                            {
                                
                               if(remainder <= i.first - 1)
                               {
                                   ans[i.second] = remainder;
                                   remainder++;
                               }
                                else{
                                    ans[i.second] = 0;
                                }
                            }

                            for(int i  = 0; i<n ; i++)
                            {
                                cout<< ans[i]<<" ";
                            }

                            cout<<"\n";
                           
                        }
                    return 0;
                } 
