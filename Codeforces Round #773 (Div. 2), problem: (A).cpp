        #include<bits/stdc++.h>
     
                    using namespace std;
     
                    typedef long long ll;
                    const ll mod = 1e9 + 7,inf = 1e18;
                    #define pie 3.1415926536
     
                    static bool cmp(pair<int, int>  a, pair<int, int> b)
                    {
                        if(a.first > b.first  && a.second >= b.second)
                            return a.first > b.first  && a.second >= b.second;
     
                        else if(a.second > b.second)
                           return a.second > b.second;
                        return a.first > b.first;
                     
                    }
                    
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
                              
                             //  string s = "abcdefghijklmnopqrstuvwxyz";
                            //  //  cin>> s;
                             // map<char, int> mp;
                               // string s;
                              //  cin>> s;
                               //vector<ll> a(n), b(n);
     
                               /* ll a[n];for(int i =0; i<n ;i++){
                                    cin>> a[i];
                                }*/
                                double x1, x2, x3, y1, y2, y3;
     
                                cin>>  x1  >>   y1 ;
                                cin>>  x2  >>  y2; 
                                cin >>  x3  >>  y3;
     
     
                                double ans = 0;
     
                                if(y1 == y2 && y2 > y3)
                                {
                                  //  cout<<"here1";
                                    ans = abs(x2 - x1);
                                }
                                else if(y2 == y3 && y2 > y1)
                                {
                                   // cout<<"here2";
                                         ans = abs(x2 - x3);
                                }
                                else if(y1 == y3 && y1 > y2)
                                {
                                   // cout<<"here3";
                                     ans = abs(x3 - x1);
                                }
     
                                cout<<fixed<<setprecision(15)<< ans;
     
                              cout<<"\n";
                            }
                        return 0;
                    } 
