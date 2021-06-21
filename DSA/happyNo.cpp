class Solution {
public:
    int sumOfSq(int n)
    {
        int res = 0;
        while(n>0)
        {
            int d = n%10;
            res +=  d*d;
            n/=10;
        }
        return res;
    }
    bool isHappy(int n) {
        
        int fast = n, slow= n;
        
        do{
            slow = sumOfSq(slow);
            fast = sumOfSq(sumOfSq(fast));
            if(fast == 1)
                return true;
            
        }while(slow != fast);
        
        return false;
    }
};
