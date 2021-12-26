class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int m = s.size();
        cout<< m;
        vector<int > ans(m,0);
        
        int X = startPos[0];
        int Y = startPos[1];
        for(int i = 0; i< m ; i++)
        {
            int x = X;
            int y = Y;
            int count = 0;
            for(int j = i; j< m; j++)
            {
                if(s[j] =='L')
                    y = y - 1;
                
                else if(s[j] == 'R')
                    y = y +1;
                
                else if(s[j] =='D')
                    x =  x+ 1;
                
                else if(s[j] == 'U')
                     x = x - 1;           
         
                if(x < 0 || y< 0 || x >=n || y>=n)
                    break;
                count++;
            }
            ans[i] = count;
        }
        return ans;
    }
};
