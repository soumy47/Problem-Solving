    #include<bits/stdc++.h> 
            using namespace std;
            typedef long long ll;
            bool isSort(ll *a,ll n)
            {
                for(int i=0 ; i<n-1 ;i++)
                {
                    if(a[i] > a[i+1])
                        return false;
                }
                return true;
            }
     
                int main()
                {
                    int t;
                    cin>>t;
                    while(t--)
                   { 
                          
                        ll n;
                        cin>>n;
                        ll  o =0, e=0;
                        ll a[n];
                        for(int i =0; i<n;i++)
                        {
                            cin>>a[i];
     
                            if(a[i] &1)
                                o++;
                            else
                                e++;
                        }
                        if( (n == o   && ((n & 1)==0) ) || n == e )
                            cout<<"NO\n";
                        else
                        cout<<"YES\n";
                    }
                     return 0;        
                    
                }
