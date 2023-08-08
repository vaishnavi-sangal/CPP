class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int buy=0,sell=0;
        int nostock=0,onestock=INT_MIN;
    for(int i=0;i<prices.size();i++)
    {
        buy=onestock;
        sell=nostock;
       onestock=max(onestock,-prices[i]);
       nostock=max(nostock,buy+prices[i]);
    }
    return nostock;
        
      
        
    }
};