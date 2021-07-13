    #include<bits/stdc++.h> 
    using namespace std;
    #define mod 1e9 + 7
 
    typedef long long int ll;
    typedef vector<int> vi;
    typedef pair<int, int> pi;
 
    typedef long long ll;
    bool cmp(pair<int, int> a , pair<int, int> b)
    {
        return a.first > b.first;
    }
    void solve()
    {
        int n,m;
        cin>>n>>m;
 
        vector<string> s1, s2;
 
        for(int i =0;i<n ;i++)
        {
            string s;
            cin>>s;
            s1.push_back(s);
        }
        for(int i =0;i<n-1 ;i++)
        {
            string s;
            cin>>s;
            s2.push_back(s);
        }
        char ans[m];
        for(int i =0;i<m;i++)
            ans[i] = 0;
 
        for(int i=0;i<s1.size(); i++ )
        {
            for(int j =0;j<m; j++)
            {
                ans[j] = ans[j] ^ s1[i][j];
            }
        }
         for(int i=0;i<s2.size(); i++ )
        {
            for(int j =0;j<m; j++)
            {
                ans[j] = ans[j] ^ s2[i][j];
            }
        }
        for(int i =0; i<m ; i++)
        {
            cout<<char(ans[i]);
        }
        cout<<endl;
        return;
    }
 
    int main()
    {     
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);       
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
        return 0;   
    }
