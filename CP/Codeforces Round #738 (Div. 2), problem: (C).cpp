     #include<bits/stdc++.h>
                using namespace std;
                #define mod 1e9 + 7
                #define RUN 10 
                #define pie 3.1415926536
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
                      ll a[n];
                     
                     for(int i = 0; i< n ;i++){
                        cin>>a[i];
                     }
                    int fg = 0;
                    if(a[0] == 1)
                    {
                        cout<<n+1<<" ";
                        for(int i = 1; i<=n ;i++)
                            cout<<i<<" ";
                          cout<<"\n";
                       fg = 1;
                    }
                    else{
                     
                        for(int i = 0; i < n ; i++){
     
                            if(!a[i]  && a[i+1])
                            {
                                for(int j = 0; j<=i; j++)
                                {
                                    cout<<j + 1<<" ";
                                }
                                cout<<n+1<<" ";
     
                                for(int j = i+1; j<n; j++)
                                {
                                    cout<<j + 1<<" ";
                                }
                                cout<<"\n";
                                fg = 1;
                                break;
                            }
                        }
                    }
                    if(!fg){
                        for(int k =0; k<= n ; k++){
                            cout<<k+1<<" ";
                        }
                        cout<<"\n";
                    }  
                  }
                    return 0;   
                }
