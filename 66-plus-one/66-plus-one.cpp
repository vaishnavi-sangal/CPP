class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        vector<int>ans;
     while(n>=0)
     {
         if(digits[n]==9)
         {
             digits[n]=0;
         }
         else
         {
             digits[n]++;
             return digits;
         }
         n--;
     }
        digits.insert(digits.begin(),1);
        return digits;
       
    }
};
