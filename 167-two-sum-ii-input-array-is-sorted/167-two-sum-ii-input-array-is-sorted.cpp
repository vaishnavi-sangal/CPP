class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int>ans;
        int start=0,end=n-1;
    int sum=0;
     while(start<end)
     {
         sum=numbers[start]+numbers[end];
         if(sum==target)
         {
             ans.push_back(start+1);
             ans.push_back(end+1);
             break;
}
         else if(sum>target)
         {
             end--;
         }
         else
         {
             start++;
         }
         
     }
        return ans;
        
    }
};