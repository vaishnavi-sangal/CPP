// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>array;
        set<vector<int>>gl;
       // vector<int>sh;
       // int start=0,start1=1,end=n-1,end1=end-1;
      //  int sum=0;
      //  int sum=arr[start]+arr[start1]+arr[end]+arr[end1];
      for(int i=0;i<=(n-3);i++){
          for(int j=i+1;j<=(n-2);j++){
      int sum=arr[i]+arr[j];
      int start1=j+1,end1=n-1;
      while(start1<end1)
      {
         // sum=sum+arr[start1]+arr[end1];
      
          if(sum+arr[start1]+arr[end1]<k)
          {
              start1++;
          }
          else if(sum+arr[start1]+arr[end1]>k)
          {
              end1--;
          }
          else
          {
             gl.insert({arr[i],arr[j],arr[start1],arr[end1]});
             start1++;
             end1--;
              
          }
      }
          }
        //  sum=arr[start]+arr[start1]+arr[end]+arr[end1];
      }
   //   array.push_back(sh);
        // Your code goes here
        for(auto it:gl)
        {
            array.push_back(it);
        }
    
    return array;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends