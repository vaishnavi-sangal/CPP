//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string l="";
        string u="";
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                u+=str[i];
            }
            else
            {
                l+=str[i];
            }
        }
        sort(l.begin(),l.end());
        sort(u.begin(),u.end());
        int a=0,b=0;
        int d=l.size(),e=u.size();
        for(int j=0;j<n;j++)
        {
            if(str[j]>=65 && str[j]<=90)
            {
                ans+=u[a++];
            }
            else{
                ans+=l[b++];
            }
        }
        return ans;
        // your code here
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends