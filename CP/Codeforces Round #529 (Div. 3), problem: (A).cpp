    #include<bits/stdc++.h> 
            using namespace std;
            typedef long long ll;
             
            //const ll N = 1e9;
            //vector<ll> isPrime(N, true);
         
         
            int main()
            {
               
                    int n;
                    cin>>n;
                    string s;
                    cin>>s;
                  
                    int j = 1;
                    string s1;
                    for(int i = 0; i<n;i+=j)
                    {
                        s1.push_back(s[i]);
                        j++;
                    }
                   cout<<s1;
                    cout<<"\n";
                
              
               
               return 0;
            }
