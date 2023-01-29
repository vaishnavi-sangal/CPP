//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int n, vector<int>& a, int target) {
       int low=0,high=n-1;
       while(low<=high)
       {
           int mid=(low+high)/2;
           if(a[mid]==target)
           {
               return 1;
           }
           else if(a[mid]==a[low]&&a[mid]==a[high])
           {
               low++;
               high--;
           }
           else if(a[low]<=a[mid])
           {
               if(a[low]<=target && a[mid]>target)
               {
                   high=mid-1;
               }
               else
               {
                   low=mid+1;
               }
           }
           else
           {
               if(a[mid]<target && a[high]>=target)
               {
                   low=mid+1;
               }
               else
               {
                   high=mid-1;
               }
           }
       }
       return false;
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends