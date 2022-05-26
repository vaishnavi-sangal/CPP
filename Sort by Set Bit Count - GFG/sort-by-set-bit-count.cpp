// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
      int count(int n)
            {
            int c=0;
            while(n!=0)
            {
                if(n&1)
                {
                    c++;
                }
                n=n>>1;
            }
            return c;
            }
            static bool cmp(pair<int,int>v1,pair<int,int>v2)
            {
                int x=v1.first;
                int y=v2.first;
                if(x==y)
                {
                    return x<y;
                }
                return v1.first>v2.first;
            }
    void sortBySetBitCount(int arr[], int n)
    {
       // unordered_map<int,vector<int>>m;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
        
            int x=count(arr[i]);
            v.push_back({x,arr[i]});
            
        }
       stable_sort(v.begin(),v.end(),cmp);
       for(int i=0;i<n;i++)
       {
           arr[i]=v[i].second;
       }
        // Your code goes here
    }
};
 

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends