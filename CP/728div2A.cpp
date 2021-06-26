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
                int n;
                cin>>n;
     
                int a[n];
                for(int i =0;i<n;i++)
                {
                    a[i] = i+1;
                }
                if((n % 2) ==0 )
                {
                    for(int i =0;i<n; i+=2)
                    {
                        swap(a[i], a[i+1]);
                    }
                }
                else{
                    for(int i=0; i<n- 3; i+=2)
                    {
                        swap(a[i], a[i+1]);
                    }
     
                    int temp = a[n-1];
                    a[n-1] = a[n-2];
                    a[n-2] = a[n-3];
                    a[n-3] = temp;
                   
                }
                for(int i =0;i<n;i++)
                {
                    cout<<a[i] <<" ";
                }
                cout<<"\n";
            }
           
           return 0;
        }
