class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int product=1;
        int n=nums.size();
        int max_product=INT_MIN;
        for(int i=0;i<n;i++)
        {
            product*=nums[i];
            max_product=max(product,max_product);
            if(product==0)
                product=1;
        }
        product=1;
        for(int i=n-1;i>=0;i--)
        {
            product*=nums[i];
            max_product=max(product,max_product);
            if(product==0)
                product=1;
        }
        
        return max_product;
        
    }
};