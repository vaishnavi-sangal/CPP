//{ Driver Code Starts
// Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int pageFaults(int n, int c, int pages[]){
       int k=0;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            auto it=find(v.begin(),v.end(),pages[i]);
            if(it==v.end())
            {
                k++;
                if(v.size()==c)
                {
                    v.erase(v.begin());
                }
                v.push_back(pages[i]);
            }
            else
            {
                v.erase(it);
                v.push_back(pages[i]);
            }
        }
        return k;
    }

};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, C;
        cin>>N;
        int pages[N];
        for(int i = 0;i < N;i++)
            cin>>pages[i];
        cin>>C;
        
        Solution ob;
        cout<<ob.pageFaults(N, C, pages)<<"\n";
    }
    return 0;
}
// } Driver Code Ends