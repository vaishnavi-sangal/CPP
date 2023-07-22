/*class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n=nums.size();
       int j=0;
       int c=0;
       for(int i=0;i<n;i++)
       {
           if(nums[i]==0)
           {
               c++;
           }
           else
           {
               nums[j++]=nums[i];
           }
       }
       while(c--)
       {
           nums[j++]=0;
       }
        
    }
};
*/


//optimal
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
       int n=arr.size();

   int j = 0;      
   for (int i = 0; i < n; i++) {
          if (arr[i] != 0) {
              swap(arr[i], arr[j]); 
              j++;
          }
   }
    }
   };