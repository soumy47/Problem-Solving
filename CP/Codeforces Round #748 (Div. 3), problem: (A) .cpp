     #include<bits/stdc++.h>
                    using namespace std;
     
                    typedef long long ll;
                    const ll mod = 1e9 + 7,inf = 1e18;
                    #define pie 3.1415926536
     
                    int main()
                    {             
                            // freopen("input.txt", "r", stdin);
                            //freopen("output.txt", "w", stdout);
                            ios_base::sync_with_stdio(false);
                            cin.tie(NULL);
                            int t;
                            cin>>t; 
                            ll  mod = 1e9 + 7;
                            while(t--) 
                             {
          
                                ll A, b, c;
                                cin>>A>>b>>c;
     
                                ll n = 3;
                                ll a[3] = {A, b, c};
     
                                ll maxi = max(A, max(b, c));
                                
                                for(ll i =0; i<n ; i++)
                                {
                                    int j, fg =  0;
                                    if(a[i] == maxi)
                                    {
                                        for(ll j =0; j< n ; j++)
                                        {
                                            if(i != j && a[i] == a[j])
                                            {
                                                    cout<< maxi - a[i] + 1<<" ";
                                                    fg = 1;
                                                    break;
                                            }
                                        }
                                        if(fg == 0)
                                        {
                                            cout<< 0 <<" ";
                                        }
                                    }
                                    else{
                                        cout<<maxi - a[i] + 1<<" ";
                                    }
                                }
     
                               
                               /*ll a[n];
                                for(int i =0; n; i++)
                                {
                                    cin>>a[i];
                                }*/
                                cout<<"\n";
                               
                            }
                        return 0;
                    } 
