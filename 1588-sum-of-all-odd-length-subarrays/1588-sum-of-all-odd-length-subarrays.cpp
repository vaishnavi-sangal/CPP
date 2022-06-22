class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      long long     int count=0;
        int n=arr.size();
        vector<vector<int>>v;
        
        for(long long int i=0;i<n;i++)
        {
            vector<int>temp;
            for(long long int j=i;j<n;j++)
            {
                temp.push_back(arr[j]);
                v.push_back(temp);
            }
       //     v.push_back(temp);
            
        }
        int sum=0;
        for(auto it:v)
        {
            int m=it.size();
            if(m %2 !=0){
            for(auto i=it.begin();i<it.end();i++)
            {
               // c++;
                
                sum=sum+*i;
            }
            }
        }
        return sum;
    }
};