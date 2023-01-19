//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int a,int b,int c,int d)
    {
       int l1=a,l2=b;
       int count=0,count2=0;
       while(l1>c || l2>d)
       {
           if(l1>c)
           {
               l1=l1/2;
               count++;
           }
           if(l2>d)
           {
               l2=l2/2;
               count++;
           }
       }
       l1=b,l2=a;
       while(l1>c||l2>d)
       {
           if(l1>c)
           {
               l1=l1/2;
               count2++;
           }
           if(l2>d)
           {
               l2=l2/2;
               count2++;
           }
       }
       return min(count,count2);
            
        //code here
    }
};
//108-60=48;

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends