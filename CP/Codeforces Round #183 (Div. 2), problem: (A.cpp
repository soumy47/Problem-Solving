       #include<bits/stdc++.h>
                using namespace std;
                #define mod 1e9 + 7
                #define RUN 10 
                #define pie 3.1415926536
                typedef long long ll;
                
                 vector<ll> arr(1e6 + 1, 0);
     
                int main()
                {             
                   // freopen("input.txt", "r", stdin);
    	            //freopen("output.txt", "w", stdout);
                        ios_base::sync_with_stdio(false);
                        cin.tie(NULL);
     
                      
                        // int t;
                        // cin>>t; 
                         
                       
                        // while(t--) 
                         //{
                               ll n;
                                cin>>n;
                                ll count =0;
                                for(int i = 1; i<=n; i++)
                                {
                                    for(int j = i; j <=  n ; j++)
                                    {
                                        ll c = (i * i ) + (j * j); 
                                        ll C = ll(sqrt(c));
     
                                        if( (C * C )== c  && c <= (n *n))
                                            count ++;
                                        else if( c > ( n * n))
                                            break;
                                    }
                                }
                                cout<< count;
                              
                                cout<<"\n";
                                
                       // }
                   return 0;   
                }
