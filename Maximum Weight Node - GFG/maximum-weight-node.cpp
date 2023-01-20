//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int n, vector<int> edge)
  {
      vector<int>ans(n,0);
      int maxi=0,c=0;
      for(int i=0;i<n;i++)
      {
          if(edge[i]!=-1)
          {
              ans[edge[i]]+=i;//   3 3
          }
          if(edge[i]==-1)
          {
              ans[i]=0;
          }
      }
      for(int i=0;i<n;i++)
      {
          if(ans[i]>=maxi)
          {
              maxi=ans[i];
              c=i;
          }
         // maxi=max(max,ans[i]);
      }
      return c;
      // code here
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends