//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void insertatbottom(stack<int>&st,int k)
{
    if(st.size()==0)
    {
        st.push(k);
        return ;
    }
    int temp=st.top();
    st.pop();
    insertatbottom(st,k);
    st.push(temp);
}
    void Reverse(stack<int> &st){
        if(st.size()==0)
        {
            return ;
        }
        int num=st.top();
        st.pop();
        Reverse(st);
      /*  while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }*/
       insertatbottom(st,num);
        
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends