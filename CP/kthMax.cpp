
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
                       // cout<<t<<" == t\n";
                        ll n, k;
                        cin>>n>>k;     
                        ll a[n]; 
                        for(int i = 0; i< n ;i++){
                            cin>>a[i];
                        }  
                        ll maxi = a[0];
                        ll count = 0;
                        for(int i = 1; i< n ;i++)
                        {
                            if(a[i]  >  maxi)
                                maxi = a[i];                            
                        }   
                       // k--;
                        for(int i = 0; i< n ;i++){
                           if( a[i] == maxi  && i >= k-1)
                            count += (n- i);
                        }  
                        cout<<count;
                        cout<<"\n";
                    }
               return 0;   
            }
       
