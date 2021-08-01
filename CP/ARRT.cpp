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
                    ll a[n];
                    ll b[n];

                    for(int i = 0; i< n ; i++)
                        cin>>a[i];
                    for(int i = 0; i< n ; i++)
                        cin>>b[i];
                    vector<ll> ans;
                    int index1 = -1;
                    int index2 = -1;

                    ll temp1 = INT_MAX, temp2 = INT_MAX;

                    for(int i = 0; i < n; i++)
                    {
                        ll val = (a[0] + b[i]) % n;
                        if(val < temp1)
                        {
                            temp1 = min(temp1, val);
                            index1 = i;
                        }
                    }
        
                    for(int i = 0; i < n; i++)
                    {
                        ll val = (a[0] + b[i]) % n;
                        if((temp1 == val)   && (i != index1))
                        {
                            index2 = i;
                        }
                    }

                    vector<ll> ans1(n);
                  

                    for(int i = 0; i< n ; i++)
                    {
                        ll val = (a[i] + b[(index1 + i) % n]) % n;
                        ans1[i]  = (val);
                       // cout << ans1[i]<<" ";
                    }

                    int fg =1;
                    vector<ll> ans2(n);
                    if(index2 != -1)
                    {  
                        for(int i = 0; i< n ; i++)
                        {
                            ans2[i] = ((a[i] + b[(index2 + i) % n] )%n);
                        }
                    
                        fg = 1;
                        for(int i = 0 ; i< n; i++)
                        {
                            if(ans1[i] < ans2[i])
                            {
                                break;
                            }
                            else if(ans1[i] > ans2[i])
                            {
                                fg = 0;
                                break;
                            }
                        }
                    }
                    if(fg == 1){
                        for(int i = 0; i < n; i++)
                        {
                           cout<<ans1[i]<<" ";
                        }
                    }
                    else{
                       for(int i : ans2)
                       {
                        cout<<i<<" ";
                       }
                    }
                    
                    cout<<"\n";
                   
                }
                return 0;   
            }
        
