class Solution {
public:
    int maxSubArray(vector<int>& arr) {
     int n=arr.size();
     long mx = arr[0];
        long curr = 0;
        for(int i = 0;i<n;i++){
            curr=curr+arr[i];
            if(curr>mx)
            mx=curr;
            if(curr<0)
            curr=0;
        }
        return mx;
    }
};