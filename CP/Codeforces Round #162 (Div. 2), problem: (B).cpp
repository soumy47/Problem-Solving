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
              
                ll n;
                cin>>n;
 
                ll h[n];
                for(int i = 0; i < n; i++)
                {
                    cin>>h[i];
                }
 
                ll res = 0;
                int jump = 1, eat = 1;
                for(int i = 0; i< n - 1;i++)
                {
                    res += (jump + eat + abs(h[i] - h[i+1]));
                }
                
               cout<<res + 1 + h[0];
                cout<<"\n";
            //}
            return 0;   
        }
