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
                        //int t;
                        //cin>>t;
                       // while(t--) 
                       // { 
                           // cout<<t<<" == t\n";
                            ll n, k;
                            cin>>n>>k;
     
                            ll a[n + 1];
                            for(int i = 1; i<= n ; i++){
                                cin>>a[i];
                            }
     
                            int fg = 0;
                            for(int i = k; i<=n; i++){
                                if(a[i] != a[k])
                                {
                                    fg = 1;
                                    break;
                                }
                            }
                            if(fg)
                                cout<<-1;
                            else{
                                ll count;
                                for(count = k - 1; count > 0 ; count--){
                                    if(a[count] != a[k])
                                        break;
                                }
                                cout<<count;
                            }
     
                           
                            cout<<"\n";
                           
                       // }
                   return 0;   
                }
           
