class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend ==INT_MIN && divisor==-1)
        {
            return INT_MAX;
        }
        long long int dvd=abs(dividend);
        long long int dvs=abs(divisor);
        int sign=dividend>0 ^ divisor>0?-1:1;
      long long   int ans=0;
        while(dvd>=dvs)
        {
            long long int temp=dvs,m=1;
            while(temp<<1 <=dvd){
            temp<<=1;
            m<<=1;
            
        }
        dvd-=temp;
        ans=ans+m;
        }
        return sign*ans;
        
    }
};