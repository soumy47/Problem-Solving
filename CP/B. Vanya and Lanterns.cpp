            #include<bits/stdc++.h> 
            using namespace std;
            typedef long long ll;
                int main()
                {   
                    ll n, l;
                    cin >> n >>l;
     
                    ll a[n];
                    for(int  i = 0;i<n;i++)
                    {
                        cin>>a[i];
                    }
     
                    sort(a, a+n);
                    int diff = 2 * max(a[0] - 0, l - a[n-1]);
     
                    for(int i = 1; i<n; i++){
                        int x = int(a[i] - a[i-1]);
                        diff = max( diff,x);
                    }
                    printf("%.10f", diff/2.);
                    return 0;         
              }
