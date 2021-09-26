#include<bits/stdc++.h>
            using namespace std;
            #define mod 1e9 + 7
            #define RUN 10 
            #define pie 3.1415926536
            typedef long long ll;

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
                     
                        ll n, p , x , y;
                        cin>> n >> p >> x >> y;
                        ll a[n];
                        for(int i=0; i< n ; i++)
                            cin>>a[i];

                      //  cout<<n<<" "<<p<<" "<< x<<" "<<y<<" ";
                        ll ans = y;
                   
                        for(int i =0; i <p - 1; i++)
                        {
                            if(a[i]==1)
                                ans += y;
                            else
                                ans += x;
                        }
                      cout<<ans;
                       cout<<"\n";
                    }
                 return 0;
            }
