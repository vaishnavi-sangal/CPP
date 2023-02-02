//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
  /*  vector<long long> nextLargerElement(vector<long long> arr, int n){
          stack<long long> st;
        vector<long long> ans;
        ans.push_back(-1);
        for(long long i=arr.size()-1;i>=0;i--){
            if(st.empty()){
                st.push(arr[i]);
            }
            else{
                if(st.top()>arr[i]){
                    ans.push_back(st.top());
                }
                else{
                    while(!st.empty() && st.top()<=arr[i]){
                        st.pop();
                    }
                    if(st.empty()){
                        ans.push_back(-1);
                    }
                    else{
                        ans.push_back(st.top());
                    }
                }
                st.push(arr[i]);
            }
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};
*/



vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<int>s;
        vector<long long>v(n);
        int i=0;
        s.push(i);
       // cout<<s.top();
        for( i=1;i<n;i++)
        {
            
            if(arr[i]<=arr[s.top()] && s.top()<n)
              {  s.push(i);
              //  cout<<s.top();
                  
              }
            else
            {
                while(!s.empty() && arr[s.top()]<arr[i])
                   {
                       v[s.top()]=arr[i];
                       s.pop();
                   }
                    s.push(i);
                    
            }
        }
     //   v[n-1]=-1;
   while(!s.empty())
       {
          v[s.top()]=-1; 
          s.pop();
       }
        return v;
       
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends