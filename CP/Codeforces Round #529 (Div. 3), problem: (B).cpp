    #include<bits/stdc++.h> 
            using namespace std;
            typedef long long ll;
             
            //const ll N = 1e9;
            //vector<ll> isPrime(N, true);
         
         
            int main()
            {
               
                    ll n;
                    cin>>n;
                   ll a[n];
                   for(int i =0;i<n;i++)
                   {
                       cin>>a[i];
                   }
                   sort(a, a+n);
                    if(n ==2)
                        {
                            cout<<0;
                            return 0;
                        }
                
                
                    cout<<min(a[n-2] - a[0], a[n-1] - a[1]);   
               return 0;
            }

