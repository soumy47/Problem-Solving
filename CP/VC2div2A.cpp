    #include<bits/stdc++.h> 
    using namespace std;
    typedef long long ll;
     
    ll a[1000001];
    int main()
    {
       int t;
       cin>>t;
       while(t--)
       {
          ll n, k;
          cin>>n>> k;
       
         for(int i=0; i<n; i++){
             cin>>a[i];
         }
         ll total = 0;
         int mn = a[0], mnidx = 0;
         for(int i =0; i<n;i++){
                if(a[i] < mn){
                    mn = a[i];
                    mnidx = i;
                }
         }
         for(int i=0;i<n;i++){
             if(i != mnidx && a[i]<=k){
                  int diff = k - a[i];
                  total += diff/mn;
             }
         }
        
        cout<<total<<"\n";
       }
       return 0;
    }
