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
     
                        ll n, m;
                        cin>>n>> m;
     
                        ll res = 0;
                        int bit = 30;
     
                        while(bit >= 0)
                        {
     
                            if( ( (1<<bit) & n)  && (  !((1 << bit) & (m +1)) ))
                                break;
                            else if(  !( (1 << bit) & n )   && ( (1 << bit) & (m+1)) )
                                res += (1<<bit);
                            bit--;
                        }
     
                        cout<<res;
                        cout<<"\n";
                       
                    }
                    return 0;   
                }
            
