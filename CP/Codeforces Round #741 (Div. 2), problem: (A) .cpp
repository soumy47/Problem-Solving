By soumya21, contest: Codeforces Round #741 (Div. 2), problem: (A) The Miracle and the Sleeper, Accepted, #, Copy

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
                           // cout<<t<<" == t\n";
                           /* ll n;
                            cin>>n;
     
                            ll a[n] ; 
                        
                            for(int i = 0; i< n ;i++){
                                cin>>a[i];
                            }*/
                       
                        
                        ll l , r;
                        cin>>l>>r;
     
                        ll mid = r/2;
     
                        if(mid +1 >= l && mid +1 <= r)
                        {
                            cout<<r % (mid + 1);
                        }            
                        else
                            cout<< r % l;                    
     
                        cout<<"\n";
                           
                        }
                   return 0;   
                }
