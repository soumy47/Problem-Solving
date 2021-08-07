By soumya21, contest: Codeforces Beta Round #91 (Div. 2 Only), problem: (B) Lucky Substring, Accepted, #, Copy

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
                       
                       string s;
                       cin>>s;
     
                       map<int , int> mp;
                       for(int i = 0; i < s.size() ; i++)
                       {
                           mp[s[i] - '0']++;
                       }
                       if(mp[4]== 0 && mp[7] == 0)
                       {
                           cout<<-1;
                       }
                       else{
                          if(mp[4] >= mp[7])
                            cout<<4;
                          else
                            cout<<7;
                       }
     
     
                       // cout<<"\n";
                       
                  // }
                    return 0;   
                }
            
