     #include<bits/stdc++.h>
                using namespace std;
                #define mod 1e9 + 7
                #define RUN 10 
                #define pie 3.1415926536
     
                typedef long long ll;
                int main()
                {             
                    ios_base::sync_with_stdio(false);
                    cin.tie(NULL);
                    //int t;
                    //cin>>t;
     
                    //while(t--)
                    //{
                        ll p , q, l , r;
                        cin>>p>>q>>l>>r;
                      
                          
                        ll z[p][2], x[q][2];
                        for(int i= 0; i< p ; i++)
                        {
                            cin>>z[i][0]>>z[i][1];
                        }
                        for(int i= 0; i< q ; i++)
                        {
                            cin>>x[i][0]>>x[i][1];
                        }  
                        ll count =0;
     
                        for(int i = l; i<= r ; i++)
                        {
                            int fg = 0;
                            for(int j = 0; j < p ; j++){  // z
     
                                for(int k = 0; k< q; k++){   // x
                                    //z's interval
                                    int a = z[j][0];
                                    int b = z[j][1]; 
     
                                    // x's interval
                                    int c = x[k][0] + i;
                                    int d = x[k][1] + i; 
     
                                    if((c >= a && c <=b )  || (d >= a && d <= b) ||( a >= c  && a <= d))
                                    {    
                                        count++;
                                        fg =1;
                                        break;
                                    }
                                }
                            if(fg)
                                break;  
                            }
     
                        }
     
                        cout<<count;
                        cout<<"\n";
                       
                  // }
                    return 0;   
                }
