//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++




class Solution
{
    public:
    //Function to merge k sorted arrays.
   vector<int> mergeKArrays(vector<vector<int>> arr, int k)

    {

        //code here

        vector<int>v;

        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;

        while(k--){

            q.push({arr[k][0],{0,k}});

        }

        while(q.empty()==false){

            auto x = q.top();

            q.pop();

            int val = x.first;

            int index = x.second.first;

            int vec = x.second.second;

            v.push_back(val);

            index++;

            if(index<arr.size()){

                q.push({arr[vec][index],{index,vec}});

            }

        }

        return v;

    }

};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends