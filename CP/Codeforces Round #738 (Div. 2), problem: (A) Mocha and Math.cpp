By soumya21, contest: Codeforces Round #738 (Div. 2), problem: (A) Mocha and Math, In queue, #, Copy

       #include<bits/stdc++.h>
                using namespace std;
                #define mod 1e9 + 7
                #define RUN 10 
                #define pie 3.1415926536
     
               
     
                typedef long long ll;
                 bool comp(ll a, ll b)
                {
                    return a > b;
                }
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
                      ll maxi = INT_MIN, mini = INT_MAX;
                      ll a[n];
                      for(int  i = 0; i< n; i++)
                      {
                          cin>>a[i];
                        
                      }
                    while(n > 1){
                        int l = 0, r = n - 1;
                        if(n & 1){
                            for(int i = 0; i <= n/2 ; i++){
                                a[i] = a[l + i] & a[r - i];
                            }
                        }
                        else{
                            for(int i = 0; i <n/2 ; i++){
                                a[i] = a[l + i] & a[r - i];
                            }
                        }
                        
                        n = n/2;
                    }
     
                    cout<<a[0];
                    cout<<"\n";
                       
                  }
                    return 0;   
                }
            
