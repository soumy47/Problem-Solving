By soumya21, contest: Codeforces Round #734 (Div. 3), problem: (A) Polycarp and Coins, Accepted, #, Copy, hack it!

     #include<bits/stdc++.h> 
                using namespace std;
                #define mod 1e9 + 7
                #define RUN 10
              
                typedef long long ll;
     
                int main()
                {     
                    ios_base::sync_with_stdio(false);
                    cin.tie(NULL);       
                    int t;
                    cin>>t;
                    while(t--)
                    {
                      
                        ll n;
                        cin>>n;
     
                       /* ll a[n];
                       for(int i  = 0; i<n; i++)
                       {
                         cin>>a[i];
                       }*/
                       
                        ll c1;
                        c1 = (n)/3;                
                        ll val = abs((2 * c1 + c1)  - n);
                        cout<< c1  + val % 2 <<" "<< c1 + val / 2;
                        cout<<"\n";                  
                    }
                    return 0;   
                }
