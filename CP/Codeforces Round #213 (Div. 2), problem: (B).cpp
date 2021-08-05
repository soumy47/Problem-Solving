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
     
                    //while(t--)
                    //{
                       ll n;
                       cin>>n;
                       
                        ll a[n];
                        for(int i = 0; i< n ; i++)
                        {
                           cin>>a[i];
                        }
     
                        if(n <= 2)
                        {
                            cout<<n;
                        }
                        else
                        {
                            ll count = 2;
             
                            ll mini = 2;
     
                            for(int i = 2 ; i< n; i++) 
                            {
                                if(a[i] == (a[i-1] + a[i-2]))
                                {
                                    mini++;
                                }
                                else{
                                    mini = 2;
                                }  
                                count = max(count, mini);
                               
                            }
     
                            cout<<count;
                            cout<<"\n";
                        }
                       
                  // }
                    return 0;   
                }
