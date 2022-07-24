class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ans=arr.size();
        int maxi=INT_MIN;
        int c=0;
        for(int i=0;i<ans;i++)
        {
            maxi=max(arr[i],maxi);
            if(i==maxi)
            {
                c++;
            }
                
        }
        return c;
        
        
    }
};