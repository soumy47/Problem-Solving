            #include<bits/stdc++.h>
            using namespace std;
            #define mod 1e9 + 7
            #define RUN 10 
            #define pie 3.1415926536
            typedef long long ll;
            bool check(int a, int b){
                int n = a*10 +b;
                for(int i = 2; i*i <= n  ; i++)
                {
                        if(n % i ==0)
                            return true;
                }
                return false;
            }
            int main()
            {             
                    ios_base::sync_with_stdio(false);
                    cin.tie(NULL);
                    int t;
                   cin>>t;
                   while(t--) 
                    { 
                       // cout<<t<<" == t\n";
                       /* ll n;
                        cin>>n;
 
                        ll a[n] ; 
                    
                        for(int i = 0; i< n ;i++){
                            cin>>a[i];
                        }*/
                   
                    ll n ;
                    cin>>n;
                   string s;
                   cin>>s;
                  
                  
                   int fg = 0;
                  
                   for(int i = 0; i< n ;i++)
                   {
                       if(s[i] != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7')
                       { 
                        cout<<"1\n"<<s[i]<<"\n";
                        fg =1;
                        break;
                        }
                   }
 
                    if(fg == 1)
                        continue;       
 
                    for(int i = 0; i< s.size(); i++)
                    {
                        for(int j = i+1; j< s.size(); j++){
                            if(check(s[i] -'0', s[j] - '0')){
                                cout<<2<<"\n";
                                cout<<s[i]<<s[j]<<"\n";
                                fg = 1;
                                break;
                            }
                        }
                        if(fg)
                                break;
                    }
                    //cout<<"nothing\n";
                }
               return 0;   
            }
