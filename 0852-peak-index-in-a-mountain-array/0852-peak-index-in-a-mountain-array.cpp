class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n = arr.size();
        int left = 0,right = n,mid;

        while(left<right)
        {
            mid = (left+right)/2;

            if((mid==0 && arr[mid] > arr[mid+1]) || (mid==n-1 && arr[mid] > arr[mid-1]) || (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]))
            return mid;

            if(arr[mid] > arr[mid-1])
            left = mid+1;
            else
            right = mid;
        }

        return -1;
    }
};