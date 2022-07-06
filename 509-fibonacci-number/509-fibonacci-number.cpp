class Solution {
public:
    int fib(int n) {
       
      int  ans=fibb(n);
        return ans;
    }
    int fibb(int n)
    {
          int a=0;
        int b=1;
        if(n==0)
            return a;
        else if(n==1 )
        {
            return b;
        }
        else
            return fibb(n-1)+fibb(n-2);
        
    }
};