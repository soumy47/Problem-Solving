    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main()
    {
        
       int t;
       cin>>t;
       while(t--)
       {
          int n;
          cin>>n;
       
          set<ll> s;
          vector<ll> a(n);
          for(int i=0;i<n;i++)
          {
            cin>>a[i]; 
            s.insert(a[i]);
          }
     
          for(int i=0;i<a.size() && a.size() <=300;i++)
          {
            for(int j = 0; j< a.size() && j!=i && j<=300; j++)
            {
                ll value = abs(a[j] - a[i]);
                if(!s.count(value))
                {
                    a.push_back(value);
                    s.insert( value );
                }
            }
          }
          if(a.size() <= 300){
              cout<<"YES\n";
                cout<<s.size()<<"\n";
             
              for(auto i : s){
                 cout<<i<<" ";
              }
          }
          else
            cout<<"NO";
            cout<<"\n";
        }
       return 0;
    }
