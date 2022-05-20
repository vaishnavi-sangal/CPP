// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    
    int flag=0;
    string a="Yes";
string b="No";
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        if(a2[i]==a1[j])
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
        
    }
    
    if(flag==0)
    {
    return b;
    break;
    }
}

if(flag==1)
{
    return a;
    
}
    
    else
    {
        return b;
    }
}