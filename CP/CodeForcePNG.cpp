Question : https://codeforces.com/contest/1515/problem/A

sol:
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
 
const ll N = 1e9+1;
vector<vector<ll>> a(1000, vector<ll>(1000));
 
 
int main()
{
    ios_base::sync_with_stdio(false);              //for fast input output 
    cin.tie(NULL);                                //it help to run code fast 
    int t;
    cin>>t;
    while(t--)
    {  
        ll n, x;
        cin>>n>>x;
        ll a[n];
 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        ll sum = 0;
        for(int i=0;i<n-1;i++) {
            if((sum + a[i] ) == x){
                swap(a[i], a[i+1]);
            }
            sum+=a[i];
        }
 
        if(sum + a[n-1] == x){
              cout<<"NO\n";
        }
           
        else{
           cout<<"YES\n";
           for(int i=0; i<n; i++){
               cout<<a[i]<<" ";
           }
           cout<<"\n";
        }
    }
    return 0;
}
