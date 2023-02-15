//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int kthLargest(vector<int> &arr,int n,int k){
        priority_queue<int>pq;
        int ans;
        for(int i=0;i<n;i++)
        {
            int sum=arr[i];
            pq.push(sum);
            for(int j=i+1;j<n;j++)
            {
                sum+=arr[j];
                pq.push(sum);
            }
        }
        while(!pq.empty() && k>0)
        {
            ans=pq.top();
            pq.pop();
            k--;
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N;
        cin>>K;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        int ans=ob.kthLargest(Arr,N,K);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends