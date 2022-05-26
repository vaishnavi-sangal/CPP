class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        while(n!=0)
        {
        //  int   m=n%10;
            if(n&1)
                c++;
         //   n=n//10;
            n=n>>1;
        }
        return c;
        
    }
};