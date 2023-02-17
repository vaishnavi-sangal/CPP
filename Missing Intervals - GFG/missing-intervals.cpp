//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> printMissingIntervals(int a[], int n) {
          vector<int>v;

        int i,start=0;

        int end=0;

        if(a[0]!=0){

            start=0;

            end=a[0]-1;

            

            v.push_back(start);

            v.push_back(end);

        }

        for(i=1;i<n;i++){

            if(a[i-1]+1!=a[i]){

                start=a[i-1]+1;

                end=a[i]-1;

                v.push_back(start);

                v.push_back(end);

            }

        }

        if(a[n-1]+1<=99999){

            start=a[n-1]+1;

            end=99999;

            v.push_back(start);

            v.push_back(end);

        }

        return v;

    
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int a[n];
        for(int i=0 ; i<n ; i++)
            cin>>a[i];

        Solution ob;
        vector<int> vec = ob.printMissingIntervals(a,n);
        
        for(int i=0 ; i<vec.size() ; i+=2)
        {
            if (vec[i]==vec[i+1])
                cout<<vec[i];
            else
                cout<<vec[i]<<"-"<<vec[i+1];
            if(i!=vec.size()-2)
                cout<<",";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends