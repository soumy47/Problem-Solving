    #include<bits/stdc++.h> 
    using namespace std;
    typedef long long ll;
    int main()
    {
       int t;
       cin>>t;
       while(t--)
       {
          int n, c0, c1, h;
          cin>>n>> c0>> c1>> h;
          string s;
          cin>>s;
     
          int count0 = 0;
          int count1 = 0;
            for(int i=0;i<n; i++){
                if(s[i] == '1')
                count1++;
                if(s[i] == '0')
                count0++;
            }
            int total = 0;
            if(c0 == c1){
                total = n * c0;
            }
            else if(c0 < c1){
                total =n * c0 + h*count1;
                
            }
            else{
                total = n* c1 + h*count0; 
            }
            total = min(total, (count0 * c0 +count1 * c1 ));
            cout<<total<<"\n";
       }
       return 0;
    }
