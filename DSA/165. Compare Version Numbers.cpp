class Solution {
public:
    
    int solve(string s,int i)
    {
        int n = s.size();
        int no = 0;
        while(i< n && s[i] =='0')
            i++;
        while(i< n && s[i] != '.')
        {
            no = no * 10 + (s[i] - '0');
            i++;
        }
        return no;
    }
    
    int compareVersion(string v1, string v2) {
        
        int n1 =  v1.size();
        int n2 = v2.size();
        
        int val1 = 0, val2 = 0;
        
        int i1 = 0, j1 = 0, i2 = 0,j2= 0;
        while(j1 < n1 || j2 < n2)
        {
            while(i1 < n1 && v1[i1] == '0')
            {
                i1++;
                j1++;
            }
            while( j1 < n1 && v1[j1] != '.')
                j1++;
                
            val1 = solve(v1, i1);
           j1 =  i1 = j1 + 1;
            
            
            //version 2
            while(i2 < n2 && v2[i2] == '0')
            {
                i2++;
                j2++;
            }
            
            while( j2 < n2 && v2[j2] != '.')
                j2++;
            
            val2 = solve(v2, i2);
            j2 = i2 = j2 + 1;
            
            
            if(val1 > val2)
                return 1;
            if(val1 < val2)
                return -1;
        }
       
        return 0;
 
    }
};
