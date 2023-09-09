class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool ans=false;
        int a=0,b=0,c=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                a++;
            }
            else if(bills[i]==10)
            {
                if(a)
                {
                    a--;
                }
                else
                {
                    return false;
                }
                b++;
                    
            }
            else
            {
                if(a >0 & b>0)
                {
                    a--;
                    b--;
                }
                else if(a>=3)
                {
                    a-=3;
                }
                else{
return false;}
            }
        }
        return true;
    }
};