    #include<bits/stdc++.h> 
            using namespace std;
            typedef long long ll;
                int main()
                {    
                        ll n;
                        cin>>n;
                        vector<ll> a(n);
                        for(int i = 0;i<n;i++)
                        {
                            cin>>a[i];
                        }
     
                        vector<ll> b(n);
                        b = a;
     
                        sort(b. begin(), b.end());
     
                        int first = -1;
                        int last;
                        int k = 0;
                        while(k < n)
                        {
                            if(a[k] != b[k]){
                                if(first == -1)
                                    first = k;
                                last = k;
                            }
                            k++;
                        }
                        if( first == -1)
                        {
                            cout<<"yes\n";
                            cout<<1<<" "<<1;
                            return 0;
                        }
     
                        reverse(a.begin() + first , a.begin() + last +1);
     
                        bool  fg = 1;
                        int i;
                        for(i = 0;i<n ;i++)
                        {
                            if( a[i] != b[i])
                            {
                                fg = 0;
                                break;
                            }
                        }
                       
                        if(fg)
                        {
                            cout<<"yes\n";
                           cout<<first +1 << " " << last + 1;
                        } 
                        else{
                            cout<<"no\n";
                        }
                       //cout <<"\n";
                     return 0;        
                    
                }
