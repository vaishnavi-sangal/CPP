class Solution {
public:
 /* Approach:

keep track of product of elements after a specific position (loop will run from end of array)
also track of product of elements before that position (loop will run from front)
the multiplication of these arrays position wise is the answer.
fun fact: we only need 1 array
vector<int> productExceptSelf(vector<int>& nums) {
        // [1,2,3,4]
        // [1, 1, 2,6] previous product from current pos
        // [24,12,4,1] ahead product from current pos
        // [24,12,8,6] prev*ahead answer
        */
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        
        int prod=1; 
        for(int i=0;i<n;i++){
            if(i==0)result[i]=prod;
            else{
                prod=prod*nums[i-1];
                result[i]=prod;
            }
        }
        prod=1;
        for(int i=n-1;i>=0;i--){
            if(i==n-1)result[i]=prod*result[i];
            else{
                prod=prod*nums[i+1];
                result[i]=prod*result[i];
            }
        }
        return result;
    }
    
};