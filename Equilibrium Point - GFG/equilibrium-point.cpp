//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
           int ans;
        //  1 4 9 11 13
       // 13    12    9 4  2
        // Your code here
       int l[n];
        int r[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            l[i]=sum;;
        }
        sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=arr[i];
            r[i]=sum;
        }
       // reverse(r.begin(),r.end());
        for(int i=0;i<n;i++)
        {
            if(l[i]==r[i])
            {
                return i+1;
            }
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends