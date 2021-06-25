 By soumya21, contest: Educational Codeforces Round 104 (Rated for Div. 2), problem: (B) Cat Cycle, Accepted, #, Copy

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
                ll n, k;
                cin>>n>>k;
                k--;
                if((n&1) == 0)
                {
                    ll index = (k % n)+ 1;
                    cout<<index;
                }
                else{
                    ll gaps = n/2;
                    ll index = (k + (k/gaps) ) % n;
                    cout<<index + 1;
                }
     
                 cout<<"\n";
            }
           
           return 0;
        }
