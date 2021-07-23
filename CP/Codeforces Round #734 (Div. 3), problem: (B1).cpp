By soumya21, contest: Codeforces Round #734 (Div. 3), problem: (B1) Wonderful Coloring - 1, Accepted, #, Copy, hack it!

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
                      
                       /* 
                        cin>>n;
     
                        ll a[n];
                       for(int i  = 0; i<n; i++)
                       {
                         cin>>a[i];
                       }*/
                       
                        string s;
                        cin>>s;
                    
                        unordered_map<char, int> mp;
                        ll n = s.size();
                        for(int i = 0;i< n;i++)
                        {
                            mp[s[i]]++; 
                           // cout<<mp[s[i]]<<" ";
                        }
     
                        if(s.size() <= 1)
                        {
                            cout<<0<<"\n";
                            continue;
                        }
     
                        int count = 0;
                        for(auto a : mp)
                        {
                            count += (a.second >= 2)  ? 2 : 1; 
                        }
                       
                        cout<<count/2;
                        cout<<"\n";                  
                    }
                    return 0;   
                }
