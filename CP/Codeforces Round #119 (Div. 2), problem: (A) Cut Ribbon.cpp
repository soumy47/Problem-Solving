#include<bits/stdc++.h>
            using namespace std;
            #define mod 1e9 + 7
            #define RUN 10 
            #define pie 3.1415926536
            typedef long long ll;
 
            int main()
            {             
                    // freopen("input.txt", "r", stdin);
                    //freopen("output.txt", "w", stdout);
                    ios_base::sync_with_stdio(false);
                    cin.tie(NULL);
                    /*int t;
                    cin>>t; 
                    while(t--) 
                    {
                       
                       long long y = (5 ^ 2) - (2 ^ 2);
 
                       cout << y<< " "<< ((5 - 2) ^ 2);
                     
 
                      
                        
                      cout<<"\n";
                    }*/
 
                    ll n, a, b, c;
                    cin>> n >> a >> b >> c;
                    
                    ll cuts[] = {a, b , c};
                    
                    ll dp[n + 1]; 
                    memset(dp, -1, sizeof(dp));
                    // i = cuts
                    // j = length(n) 
                    dp[0] = 0;
                    for(int i = 1; i<= 3; i++)
                    {
                            for(int j =1; j <=n ; j++)
                            {
                                if(j- cuts[i - 1] >=0  && dp[j - cuts[i - 1]] != -1 )
                                {
                                    dp[j] = max(1 + dp[j - cuts[i - 1]]  , dp[j]);
                                }
                            }
                    }
                    if(dp[n] == -1)
                       cout<< 0;
                    else
                        cout<< dp[n];
                   
                return 0;   
            }
  
