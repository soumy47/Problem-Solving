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
                                
                              /*long long  count = 0;
                                ll n;
                                cin>>n;
                               string s;
                                cin>> s;
                               map<ll, ll> mp;
                                ll a[n];
                                 set<ll> s;
     
                                for(int i = 0; i< n ; i++)
                                {
                                    cin>>a[i];
                                }*/
     
                                ll n ;
                                cin>> n;
                             
                                int a[n];
                                map<ll, ll> mp;
                                for(int i =0; i< n ; i++)
                                {
                                    cin>> a[i];
                                }
                              ll ans = INT_MAX;
                                vector<ll> v;
     
                                v.push_back(a[0]);
                                for(int i = 1; i< n ; i++)
                                {
                                        if(a[i-1]  == a[i])
                                            continue;
                                        else{
                                            v.push_back(a[i]);
                                        }
                                }
                                int m = v.size();
                                for(int i =0; i<m ; i++)
                                {
                                    mp[v[i]]++;
                                }
                                for(auto i : mp)
                                {
                                    mp[i.first]++;
                                }
                                
                                mp[v[0]]--;
                                mp[v[m - 1]]--;
                                
                                for(int i = 0; i< m; i++)
                                {
                                  //  cout<< v[i]<<" : "<<mp[v[i]]<<"\n";
                                    ans = min(ans, mp[v[i]]);
                                }
     
                               cout<< ans;
                                cout<<"\n"; 
                            }
                          
                        return 0;
                    } 
