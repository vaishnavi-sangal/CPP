class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        bool ans=false;
        int count_5=0,count_10=0,count_20=0;
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5)
                count_5++;
         else   if(bills[i]==10){
                if(count_5>0){
                count_10++;
             count_5--;
                }
             else
             {
                 return false;
             }
         }
            else{
                  if (count_5 > 0 && count_10 > 0) {
                    count_5--;
                    count_10--;
                } else if (count_5 >= 3) {
                    count_5 -= 3;
                } else {
                    return false;
                }
                
        }
       
        }
        return true;
    }
};