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
                          ll k;
                            cin>>k;
     
                            ll i =1;
                            ll row, col;
                            int fg = 0;
     
                            while( k > i * i){
                                i++;
                            }
                           
                            if(k <= i*i){
                                    ll mid = (i * i) - (i -1);
                                    if(k < mid){
                                        col = i;
                                        row = i - (mid - k);
                                    }
                                    else{
                                        row = i;
                                        col = i - (k - mid);
                                    }
                            }
     
                            cout<<row<<" " << col;
                            cout<<"\n";
                        }
                 
                   return 0;   
                   
                }
