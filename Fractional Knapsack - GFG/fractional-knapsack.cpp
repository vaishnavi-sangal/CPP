//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool fun(Item a,Item b)
    {
        return ((float)a.value/a.weight)>((float)b.value/b.weight);
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
      sort(arr,arr+n,fun); 
      double ans=0;
      for(int i=0;i<n;i++)
      {
          if(W>=arr[i].weight)
          {
              W=W-arr[i].weight;
              ans=ans+arr[i].value;
          }
          else
          {
              double val=((double)W/arr[i].weight)*arr[i].value;
              ans=ans+val;
              break;
          }
      }
      return ans;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends