    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main()
    {
        
       int t;
       cin>>t;
       while(t--)
       {
          int n;
          cin>>n;
       
          map<ll,ll> mp;
          ll a[n];
          for(int i=0;i<n;i++)
          {
            cin>>a[i]; 
            mp[a[i]-(i)]++;
          }
            ll ans=0;
            for(auto i : mp){
               ans += (i.second*(i.second-1))/2;
            }  
            cout<<ans;
              cout<<"\n";
        }
       return 0;
    }
