          #include<bits/stdc++.h>
                using namespace std;
                #define mod 1e9 + 7
                #define RUN 10 
                #define pie 3.1415926536
                typedef long long ll;
             
                int main()
                {             
                        ios_base::sync_with_stdio(false);
                        cin.tie(NULL);
                       /* int t;
                       cin>>t;
                       while(t--) 
                        { 
                           // cout<<t<<" == t\n";
                            ll n, k;
                            cin>>n>>k;     
                            ll a[n]; 
                            for(int i = 0; i< n ;i++){
                                cin>>a[i];
                            }*/  
     
                            ll n ;
                            cin>>n;
     
                            vector<pair<ll , ll>> v(n);
                          
                            ll mini = 1e9+1, maxi = -1;
                            for(int i = 0; i < n ; i++)
                            {
                                cin>>v[i].first;
                                cin>>v[i].second;
                                mini = min(mini, v[i].first);
                                maxi = max(maxi, v[i].second);
                            }
                            ll ans = -1; 
                            ll a = mini;
                            ll b = maxi;
                            for(int i = 0; i < n ; i++)
                            {
                                ll x = v[i].first;
                                ll y = v[i].second;
                               
                                if(x <= a && y>= b  && x <= y)
                                {
                                    ans = i+1;
                                 //   cout<<a <<" "<< b <<" "<<x <<" "<<y<<"\n";
                                    break;
                                }
                            }
                            cout<<ans;
                            cout<<"\n";
                        //}
                   return 0;   
                }
