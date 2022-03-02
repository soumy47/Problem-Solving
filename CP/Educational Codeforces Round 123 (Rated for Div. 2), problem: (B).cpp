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
     
                           int t;
                            cin>>t; 
                            while(t--) 
                            {
                               ll n;
                            cin>> n;
                             //  string s = "abcdefghijklmnopqrstuvwxyz";
                            //  //  cin>> s;
                              map<char, int> mp;
                                string s;
                              //  cin>> s;
                               ll a[n], b[n];
                                for(int i =0; i<n ;i++){
                                    a[i] = i + 1;
                                }
     
                            
                                reverse(a, a+n);   
                              
                               
                                    for(int i= 0 ;i< n ; i++)
                                    {
                                        swap(a[i],a[0]);
                                        int fg = 0;
     
                                        if(i>= 2 && (a[i-1] + a[i-2] == a[i]))
                                        {
                                            swap(a[i-1], a[i]);  
                                            fg= 1;
                                        }
                                        for(int i = 0; i< n ; i++)
                                        {
                                                cout<< a[i]<<" ";
                                        }
     
                                        cout<< "\n";
                                         if(fg == 1)
                                        {
                                            swap(a[i-1], a[i]);
                                        }
     
                                        swap(a[i], a[0]);
                                    }
                                
                             // cout<<"\n";
                            }
                        return 0;
                    } 
