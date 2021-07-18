By soumya21, contest: Codeforces Round #157 (Div. 2), problem: (B) Little Elephant and Magic Square, Accepted, #, Copy

     
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
                  
                    //ll n;
                    //cin>>n;
     
                    ll a[3][3];
                    for(int i = 0; i < 3; i++)
                    {
                        for(int j = 0; j< 3 ; j++)
                            cin>>a[i][j];
                    }
                    int sum0 = 0, sum1 = 0, sum2 =0;
                    int maxi = 0;
                    for(int  i = 0;i< 3;i++)
                    {
                        sum0 += a[0][i];
                        sum1 += a[1][i];
                        sum2 += a[2][i];
                    }
     
                    a[1][1] = (sum0 + sum2 - sum1)/2;
     
                    a[2][2] = (sum0 + sum1 - sum2)/ 2;
     
                    a[0][0] = (sum1 + sum2 - sum0)/2;
     
                     for(int i = 0; i < 3; i++)
                    {
                        for(int j = 0; j< 3 ; j++)
                            cout<<a[i][j]<<" ";
                            cout<<"\n";
                    }
     
                    cout<<"\n";
                //}
                return 0;   
            }
