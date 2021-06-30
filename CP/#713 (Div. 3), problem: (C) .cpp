     #include<bits/stdc++.h> 
        using namespace std;
        typedef long long ll;
         
        //const ll N = 1e9;
        //vector<ll> isPrime(N, true);
        bool  isPalin(string s)
        {
            int i =0, j = s.size()-1;
            while(i <= j)
            {
                if(s[i]  != s[j])
                return false;
                i++;
                j--;
            }
            return true;
        }
     
        int main()
        {
           
            ll t;
            cin>>t;
            while(t--)
            {
                ll a, b;
                cin>>a>>b;
     
                string s;
                cin>>s;
     
                for(int i =0;i < s.size();i++)
                {
                    if(s[i]== '0')
                        --a;
                    else if( s[i] == '1')
                        --b;
                }
                int n = s.size();
                bool fg =1;
               // cout<<a<<" "<<b<<" \n";
               
     
                for(int i = 0; i< n/2; i++)
                {
                    if(s[i] == '?'  && s[n-i-1] != '?'){
                        //cout<<i<<" ";
                        s[i] = s[n-i-1]; 
                        s[i] == '0'? a--: b--;
                    }
                    else if(s[i]!= '?'  && s[n-i-1] == '?')
                    {
                        /// cout<<i<<" ";
                        s[n-i-1] = s[i]; 
                        s[i] == '0'? a--: b--;
                    }
                }
     
                if((n % 2== 1)  && s[n/2] =='?')
                {
                    int i = n/2;
                    if(a&1){   
                        s[i] = '0';
                        a--;
                    }
                    else if (b & 1){    
                        s[i] = '1';
                        b--;
                    }
                }
     
                for(int i = 0;i<n/2;i++){
                    if(s[n-i-1] == '?')
                    {
                       // cout<<i<<"\n";
                        if( a>=2){
                            s[i] = s[n - i- 1] = '0';
                            a-=2;
                        }
                        else if( b >=1){
                             s[i] = s[n - i- 1] = '1';
                             b-=2;
                        }
                    }
                }  
               
                if(a==0 && b==0  && isPalin(s)){
                    cout<<s;
                }
                else{ 
                    cout<<-1;
                }
                cout<<"\n";
            }
           return 0;
        }
