class Solution {
public:
    int solve(int i, int n) 
    {
        
        if(n==0)
            return 1;
        if(i > n)
            return 0;
        
        if( i <= n)
        {
            return max(i * solve(i, n - i), solve(i +1, n));
        }
        return solve(i + 1, n);
    }
        
    int integerBreak(int n) {
        if(n == 2)
            return 1;
        if(n == 3)
            return 2;
        
        return solve(1,n);
    }
};
