class Solution {
public:
    bool isCovered(vector<vector<int>>& a, int l, int r) {
        int n = a.size();
        sort(a.begin(), a.end());
        int m = a[0].size();
        
        for(int i=0;i<n;i++){
            
            for(int j= 0; j<2; j++)
            { 
                if(l >=a[i][0]  &&  l<=a[i][1])
                {
                    if(a[i][1] >= r)
                        return true;
                    else if(l<a[i][1])
                        l = a[i][1];
                    else if(l == a[i][1])
                        l++;
                }
                else if(l < a[i][0])
                    return false;
                    
            }
        }
        if(l > r)
            return true;
        return false;
    }
};
