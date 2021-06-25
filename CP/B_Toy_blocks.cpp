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
                cin>>n;
                
                ll a[n];
                ll k, sum =0;
     
                for(int i =0; i<n; i++)
                {
                    cin>>a[i];
                    sum+= a[i];
                }
     
                k = (sum + n -2)/(n-1);
                //cout<<k<<" ";
                for(int i=0;i<n;i++)
                {
                    k = max(k,a[i]);
                }
                //cout<<k;
                cout<<k*(n-1) - sum;
                cout<<"\n";
            }
           
           return 0;
        }
