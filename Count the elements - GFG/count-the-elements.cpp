//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;
vector<long long> find(vector<long long> a,vector<long long> b,vector<long long> q);

int main() {
    
    int t;

    cin >> t;

    while(t--){
       
       int n;
       cin >> n;
       vector<long long> a;
       vector<long long> b;
       vector<long long> ans;
       int input;
       for(int i =0;i<n;i++){
           cin>> input;
           a.push_back(input);
          }
       for(int i =0;i<n;i++){
           cin >> input;
           b.push_back(input);
       }
       int qsz;
       cin >> qsz;
       vector<long long> q;    
       for(int i =0;i<qsz;i++)
        {
           cin >> input;
           q.push_back(input);
        }
        ans= find(a,b,q);
        for(int i =0;i<qsz;i++){
            cout<< ans[i] << endl;
      }
    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

vector<long long> find(vector<long long> a,vector<long long> b,vector<long long> q) {
    sort(b.begin(),b.end());
    vector<long long>v;
    for(long long i=0;i<q.size();i++)
    {
        long long ai=q[i];
        long long k=a[ai];
        long long ans=0;
        for(long long j=0;j<b.size();j++)
        {
            if(b[j]<=k)
            ans++;
            else
            {
                break;
            }
        }
        v.push_back(ans);
        
        
        
    }
    return v;

}
