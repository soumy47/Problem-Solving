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
 
                    ll n;
                    cin>> n;
                    ll a[n];
                    for(int i =0; i< n ; i++)
                        cin>>a[i];
                    ll change = 0;
                    int fg = 1;
                    ll count50 = 0, count25 =0;
 
                    for(int i = 0; i < n ; i++)
                    {
                       if(a[i] == 100)
                       {
                           if(count25 >=1 && count50>=1)
                           {
                               count25--;
                               count50--;
                           }
                           else if(count25>=3)
                           {
                               count25 -= 3;
                           }
                           else{
                               fg = 0;
                               break;
                           }
                       }
                       else if(a[i] ==  50)
                       {
                           count50++;
 
                           if(count25 >= 1)
                               count25--;
                            else{
                                fg = 0;
                                break;
                            }
                       }
                       else{
                           count25++;
                       }
                    }
                    if(fg)
                        cout<<"YES";
                    else
                        cout<<"NO";
                return 0;   
            }
