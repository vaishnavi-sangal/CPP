//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> a, int n, vector<int> b, int m) 
    {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<n;i++)
        {
            mp1[a[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            mp2[b[i]]++;
        }
        vector<int>ans;
         for(int i=0;i<m;i++)
        {
            if(mp1[b[i]]>0)
            {
                int a=mp1[b[i]];
                while(a>0)
                {
                    ans.push_back(b[i]);
                    a--;
                }
            }
        
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(mp2[a[i]]==0)
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            ans.push_back(v[i]);
        }
        return ans;
        
        
        //Your code here
    } 
};

//{ Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 

// } Driver Code Ends