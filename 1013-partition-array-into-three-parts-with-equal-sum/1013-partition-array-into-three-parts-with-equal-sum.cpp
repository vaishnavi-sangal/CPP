class Solution {
public:
   bool canThreePartsEqualSum(vector<int>& arr) 
{
    int sum=0;
    
    for(auto it:arr)
    {
        sum=sum+it;
    }
    if(sum%3!=0) return false;
	
    int count=0,currsum=0;
  
  for(int i=0;i<arr.size();i++)
    {
        currsum=currsum+arr[i];
        if(currsum==sum/3)
        {
            count++;
            currsum=0;
        }

    }
    
    if(count>=3) return true;
    return false;
}
    
};