//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    int fndgap(int gap)
{
	if(gap<=1)
	return 0;
	else
	return ((gap/2) + (gap%2));
}
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int m, int n) 
        { 
            	int i,j,gap=m+n;
	for(gap=fndgap(gap);gap>0;gap=fndgap(gap))
	{
		//comparison in first array i.e (i && i+gap) both element is present in same array(1st array);
		for(i=0;i+ gap<m;i++)
		{
			if(arr1[i]>arr1[i+gap])
			swap(arr1[i],arr1[i+gap]);
		}
		//comparison in both the array i.e first element is present in first array && 2nd element is present in 2nd array
		for(j=gap>m?gap-m:0;i<m && j<n;i++,j++)
		{
			if(arr1[i]>arr2[j])
			swap(arr1[i],arr2[j]);
		}
		//if(j && j+gap ) both are present in 2nd array;
		if(j<n);
		{
			for(j=0;j+gap<n;j++)
			{
				if(arr2[j]>arr2[j+gap])
				swap(arr2[j],arr2[j+gap]);
			}
		}
	}
            // code here 
        } 
};





//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends