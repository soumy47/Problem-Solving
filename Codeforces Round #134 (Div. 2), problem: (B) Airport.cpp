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
                   // int t;
                    //cin>>t;
     
                   // while(t--)
                    //{
                       
                      ll n, m;
                      cin>>n >> m;
                      ll a[m];
                      for(int  i = 0; i< m; i++)
                      {
                          cin>>a[i];
                      }
                      sort(a, a + m);
     
                      ll mini = 0;
                      int j = 0;
                      int k = a[0];
                      for(int i = 0 ; i < n ; i++)
                      {
                            mini += k;
                            k -= 1;
                            if(k == 0)
                            {
                               k = a[++j];
                            }
                      }
                     ll maxi  = 0;
                    
                     sort(a, a + m,comp);
                     for(int i = 0 ; i< n ; i++)
                     {
                         maxi += a[0];
                         a[0] -= 1;
                        
                            for(int j = 1 ; j < m ; j++){
     
                                if(a[j] <= a[j-1])
                                    break;
                                swap(a[j], a[j-1]);
                            }
     
                     }
     
                     cout<< maxi << " "<< mini;
                    cout<<"\n";
                       
                 //  }
                    return 0;   
                }
