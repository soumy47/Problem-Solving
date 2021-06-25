    #include<bits/stdc++.h> 
        using namespace std;
        typedef long long ll;
         
        //const ll N = 1e9;
        //vector<ll> isPrime(N, true);
        
        int main()
        {
            ll T;
            cin>>T;
            while(T--)
            {
                ll n;
                long double k;
                cin >> n >> k;
                
                long double a[n];
                long double sum1 = 0.0;
                long double sum2 = 0.0;
     
                for(int i =0; i<n; i++)
                {
                    cin >> a[i];
                }
                for(int i=1; i<n; i++)
                {
                    sum1 += a[i-1];
                    sum2 += a[i-1];
                    long double x = a[i] /sum1 * (1.0 * 100);
                    if( x  > k)
                    {
                        long double extra = ( a[i]* (1.0 * 100)) / k  - sum1;
     
                        extra = ceil(extra);
                        
                        sum1 = sum1 + extra;
                    }
                }
                cout<<(ll)(sum1 - sum2); 
                cout<<"\n";
            }
           
           return 0;
        }
