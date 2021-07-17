

    #include<bits/stdc++.h> 
            using namespace std;
            #define mod 1e9 + 7
            #define RUN 10
          
            typedef long long ll;
         
          
            int main()
            {     
                ios_base::sync_with_stdio(false);
                cin.tie(NULL);       
               // int t;
               // cin>>t;
                //while(t--)
                //{
                  
                    ll n , a, b;
                    cin>>n>>a>>b;
     
                    unordered_map<int, int> mp;
     
                    ll p[n];
                    for(int i =0;i<n;i++)
                        cin>>p[i];
                    
     
                    int fg = 1, count=0;
                    int i = a - 1;
                    if( a==b)
                        {
                            cout<<0;
                            return 0;
                        }
                    while(1)
                    {
                        ///cout<<i<<"\n";
                        if(mp.find(i) != mp.end())
                            {
                                    fg =0;
                                    break;
                            }
                        mp[i]++;
                        i = p[i] - 1;
                        count++;
     
                        if( i == b-1)
                        {
                            fg =1;
                            break;
                        }
                    }
                    if(fg)
                        cout<<count;
                    else{
                        cout<<-1;
                    }
                   
                    cout<<"\n";
                //}
                return 0;   
            }
