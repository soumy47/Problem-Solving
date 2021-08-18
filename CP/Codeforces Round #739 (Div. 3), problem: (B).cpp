By soumya21, contest: Codeforces Round #739 (Div. 3), problem: (B) Who's Opposite?, Accepted, #, Copy, hack it!

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
                        int t;
                        cin>>t;
                        while(t--) 
                        {
                           
                           //cout<<t<<" ";
                            ll a, b , c;
                            cin>>a>>b >> c;
                            ll diff = abs(a -b);
                            ll total = 2 * diff;
     
                            if( c > total  || a > total || b > total )
                            {
                              cout<<-1<<"\n";
                              continue;
                            }
     
                            ll d;
                            if(c <= (total/2) )
                                    cout<<c + diff;
                            else{
                                    d = (c + diff) % total;
                                cout<<d;
                            }
                            cout<<"\n";
                        }
                 
                   return 0;   
                   
                }
