class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        int ans;
        while(num!=0)
        {
            if(num%2==0)
            {
            ans=num/2;
            num=ans;
            }
           
            else
            {
                num=num-1;
                ans=num;
            }
            c++;
            
          }
        return c;
        
    }
};