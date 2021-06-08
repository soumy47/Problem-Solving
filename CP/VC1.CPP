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
         a[0] = 0;
         int size = n*k;
         for(int i=1; i<= size; i++){
             cin>>a[i];
         }
         ll total = 0;
         
        
        for(int i= (size); k ; i = i -(n/2) - 1){
                  //  cout<<a[i]<<" ";
                k--;
                total += a[i - (n/2)];
            }
        cout<<total<<"\n";
       }
       return 0;
    }
