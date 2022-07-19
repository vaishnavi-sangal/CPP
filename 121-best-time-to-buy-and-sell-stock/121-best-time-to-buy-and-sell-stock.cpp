class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxi=INT_MIN,cp=INT_MAX;
        for(int i=0;i<n;i++)
        {
           cp=min(cp,prices[i]);
            maxi=max(maxi,prices[i]-cp);
        }
        return maxi;
        
    }
};