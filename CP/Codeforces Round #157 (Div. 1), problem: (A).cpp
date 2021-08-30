   #include<bits/stdc++.h>
            using namespace std;
            #define mod 1e9 + 7
            #define RUN 10 
            #define pie 3.1415926536
            typedef long long ll;
            
            ll value(string s)
            {
                ll n = 0;
 
                for(int i  = 0; i<s.size(); i++)
                {
                    n = n*10 + (s[i] - '0');
                }
                return n;
            }
 
 
            int main()
            {             
                    ios_base::sync_with_stdio(false);
                    cin.tie(NULL);
                   /* int t;
                   cin>>t;
                   while(t--) 
                    { 
                       // cout<<t<<" == t\n";
                        ll n, k;
                        cin>>n>>k;     
                        ll a[n]; 
                        for(int i = 0; i< n ;i++){
                            cin>>a[i];
                        }*/  
 
                        string s1;
                        cin>> s1;
                        int fg = 0;
                        for(int i = 0; i< s1.size(); i++)
                        {
                            if(s1[i]=='0'){
                                s1.erase(s1.begin() + i);
                                fg = 1;
                                break;
                            }
                        }
 
                        if( !fg )
                        s1.erase(s1.begin() + 0);
                            cout<<s1;
                        cout<<"\n";
                    //}
               return 0;   
            }
