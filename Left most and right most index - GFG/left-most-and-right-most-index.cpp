//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
       // pair<long long,long long>ans;
      long long int first, last;
    //  sort(v.begin(),v.end())
    // to store first occurrence
    
    first = lower_bound(v.begin(), v.end(), x) - v.begin();
    // to store last occurrence
    last = upper_bound(v.begin(), v.end(), x) - v.begin()-1;
    
    if(binary_search(v.begin(),v.end(),x)==false)
        return {-1,-1};
        
        
        
        return {first,last};
        // code here
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends