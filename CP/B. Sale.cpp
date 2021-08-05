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
                       ll n, m;
                       cin>>n>>m;
                       
                        ll a[n];
                        for(int i = 0; i< n ; i++)
                        {
                           cin>>a[i];
                        }
                            ll sum = 0;
                            ll count = 0;
                            sort(a, a+n);
                            for(int i = 0; i< n ;i++)
                            {
                                if(a[i] < 0){
                                    sum += abs(a[i]);
                                    count++;
     
                                    if(count == m)
                                        break;
                                }
                                
                            }
                            cout<<sum;
                            cout<<"\n";
                       
                  // }
                    return 0;   
                }
