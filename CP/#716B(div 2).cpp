    #include<iostream>
    #include<vector>
    #include<algorithm>
    #include<cmath>
    using namespace std;
    typedef long long ll;
     
    const ll N = 1e9+7;
    vector<vector<ll>> a(1000, vector<ll>(1000));
     
    bool isPerfect(ll n){
        int m = int(sqrt(n));
        return ((m*m) == n);
    }
    ll power(ll n, ll k){
        n %= N;
        ll ans = 1;
        while(k > 0){
            if(k & 1){
                ans = (ans * n) % N;
            }
            n = (n * n) % N;
            k/=2;
        }
        return ans;
    }
    int main()
    {
        ios_base::sync_with_stdio(false);              //for fast input output 
        cin.tie(NULL);                                //it help to run code fast 
        int t;
        cin>>t;
        while(t--)
        {  
            ll n, k;
            cin>>n>>k;
     
                cout<<power(n,k);
          cout<<"\n";
        }
        return 0;
    }
