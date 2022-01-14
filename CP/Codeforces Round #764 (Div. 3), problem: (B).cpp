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
     
                                ll a, b,c ;
                                //cin>> n;
                                cin>> a>> b >> c;
     
                               // int a[n];
                                map<ll, ll> mp;
                              /*  for(int i =0; i< n ; i++)
                                {
                                    cin>> a[i];
                                }*/
                         
                                ll A =  (2*b - c )/a;
                                ll B =  (c + a )/ (2*b);
                                ll C = (2 * b - a)/c ;
                        
                              
                                if(A  >= 1   && (( c - b )== (b - a*A)) )
                                    cout<<"YES";
                                
                                else if(B>=1  && ((c - B*b) == (b * B - a)))
                                {
                                    cout<<"YES";
                                }
                                else if(C >=1  && (C*c- b) == (b - a))
                                {
                                    cout<<"YES";
                                }
                                else{
                                    cout<<"NO";
                                }
     
                           
                                cout<<"\n"; 
                            }
                          
                        return 0;
                    } 
