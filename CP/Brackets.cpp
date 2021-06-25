     #include<bits/stdc++.h> 
        using namespace std;
        typedef long long ll;
         
        //const ll N = 1e9;
        //vector<ll> isPrime(N, true);
        
        int main()
        {
             ll T;
             cin>>T;
             while(T--)
             {
              string s;
              cin>>s;
                int n = s.size();
                    if((n%2 ==0)  && s[0] != ')' && s[n-1] !='(')
                        cout<<"YES\n";
                    else{
                        cout<<"NO\n";
                    }
              }
           //   cout<<"\n";
           return 0;
        }
