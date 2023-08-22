//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
         int max_sum = 0;
        
        vector<long long >store_row_sum ;
        vector<long long >store_col_sum ;
        
        for(int i = 0 ; i<n;i++){
            
            int row_sum = 0;
            int col_sum = 0;
            
            for(int j=0;j<n;j++){
                row_sum += matrix[i][j];
                col_sum += matrix[j][i];
            }
            
            max_sum = max(max_sum,max(row_sum,col_sum));
            store_row_sum.push_back(row_sum);
            store_col_sum.push_back(col_sum);
        }
        
        long long res = 0;
        for(int i = 0;i<n;i++){
            res += max_sum - store_row_sum[i];
        }
        return res;


    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends