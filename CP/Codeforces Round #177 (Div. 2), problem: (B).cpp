       #include<bits/stdc++.h>
     
                    using namespace std;
     
                    typedef long long ll;
                    const ll mod = 1e9 + 7,inf = 1e18;
                    #define pie 3.1415926536
     
                    static bool cmp(pair<int, int>  a, pair<int, int> b)
                    {
                        if(a.first > b.first  && a.second >= b.second)
                            return a.first > b.first  && a.second >= b.second;
     
                        else if(a.second > b.second)
                           return a.second > b.second;
                        return a.first > b.first;
                     
                    }
            
                    int main()
                    {             
                            // freopen("input.txt", "r", stdin);
                            //freopen("output.txt", "w", stdout);
     
                            ios_base::sync_with_stdio(false);
                            cin.tie(NULL);
                            /*
                            int t;
                            cin>>t; 
                            while(t--) 
                            {*/
                                ll n, m , d;
                                cin>> n >> m >> d;
                        
                               //  string s;
                               // cin>> s;
     
                               // cout<< s<<" ";
                               //vector<ll> a(n), b(n);
     
                              
                               /* string t = s;
                              /  reverse(t.begin(), t.end());
                                if( s == t)
                                    ans = 0; 
                                else
                                {
                                    ll n = s.size();
                                        for(int i = 0, j = n- 1; i<=j ;i++, j--)
                                        {
                                            if(s[i] == s[j])
                                            {
                                               pp++;
                                            }
                                            else{
                                                break;
                                            }
                                        }
                                        
                                        ll np = n - 2*pp;
                                        ans = pp + np - 1;
                              
                                }
    */                          
                                ll ans =  0, count = 0;
                                ans = INT_MAX;
                                vector<ll> a;
                                for(int i = 0; i< n; i++)
                                {
                                    for(int j = 0; j< m ;j++)
                                    {
                                        int x;
                                        cin>> x;
                                        a.push_back(x);
                                    }
                                }
                                
                                n *= m;
                                int fg = 1;
                                int rem = a[0] % d;
                                for(int i = 1; i < n; i++)
                                {
                                    if(a[i] % d != rem)
                                    {
                                        fg = 0;
                                        break;
                                    }
                                }
     
                                if(fg == 0){
                                    ans = -1;
                                }
                                else
                                {
                                    sort(a.begin(), a.end());
                                    int med = n/2;
                                    int sum = 0;
                                    for(int i = 0; i< n ; i++)
                                    {
                                        sum += abs(a[i] - a[med]);
                                    }
                                    ans = sum/d;
                                }
                                cout<<ans;
                                cout<<"\n";
                            //}
                        return 0;
                    } 
