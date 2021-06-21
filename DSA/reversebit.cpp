class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t no = 0;
        int power = 31;
        
        while(n != 0)
        {
          no = no  + ((n % 1)  << power);
          power -= 1;
          n>>=1;
        }
        return no;
    }
};
