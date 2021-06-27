    #include<bits/stdc++.h> 
        using namespace std;
        typedef long long ll;
         
        //const ll N = 1e9;
        //vector<ll> isPrime(N, true);
     
        int solve(int (*a)[2], int n, int k)
        {
            int poss = -1;
            int i, j, x, y, maxi  = -1;
            for(i=0;i<n;i++)
            {
                maxi  = 0;
                for(j = 0; j<n ; j++)
                {
                   // cout<<"j = "<<j<<"\n";
                 x = abs(a[i][0] - a[j][0]);
     
                 y = abs(a[i][1] - a[j][1]);
                 maxi  = max(maxi, x+y);
                } 
                if(maxi <= k ){ 
                           poss =1;
                        }
               
            }
            return poss;
        }
        
        int main()
        {
            ll T;
            cin>>T;
            while(T--)
            {
                int n;
                ll k;
                cin>>n>>k;
                int a[n][2];
                for(int i = 0; i<n; i++)
                {
                    cin>>a[i][0];
                    cin>>a[i][1];
                }
                cout<<solve(a, n, k)<<"\n";
            }
           
           return 0;
        }
