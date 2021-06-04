    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main()
    {
        
       int t;
       cin>>t;
       while(t--)
       {
          int n;
          cin>>n;
       
          vector<int> odd;
          int a[n];
          for(int i=0;i<n;i++)
          {
              cin>>a[i]; 
              if((a[i] & 1) == 0){
                  odd.push_back(a[i]);
                }
          }
          for(int i=0;i<n;i++)
          {
              if(a[i] %2 == 1)
                odd.push_back(a[i]);
          }
        
        int total = 0;
        for(int i=0;i<n;i++){
            for(int j =i+1; j<n; j++){
                if(__gcd(odd[i], 2 * odd[j]) > 1)
                    total++;
            }
               
        }
        cout<<total<<"\n";
       }
       return 0;
    }
