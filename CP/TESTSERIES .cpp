#include<bits/stdc++.h>
                using namespace std;

                typedef long long ll;
                const ll mod = 1e9 + 7,inf = 1e18;
                #define pie 3.1415926536

                int main()
                {             
                        // freopen("input.txt", "r", stdin);
                        //freopen("output.txt", "w", stdout);
                        ios_base::sync_with_stdio(false);
                        cin.tie(NULL);
                        int t;
                        cin>>t; 
                        ll  mod = 1e9 + 7;
                        while(t--) 
                         {
      
                            int India = 0 , England = 0;
                            int R[5];
                            for(int i =0; i<5 ; i++)
                                    cin>>R[i];

                            for(int i =0; i< 5; i++)
                            {
                                if(R[i] == 1)
                                    India++;
                                else if(R[i] == 2)
                                    England++;
                            }
                            if(India > England)
                                cout<<"India\n";
                            else if(England > India)
                                cout<<"England\n";
                            else
                                cout<<"Draw\n";
                            
                            


                           
                           /*ll a[n];
                            for(int i =0; n; i++)
                            {
                                cin>>a[i];
                            }*/
                           // cout<<"\n";
                           
                        }
                    return 0;
                } 
