class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>v;
        int ans=-1;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
            }
        }
        if(k<=v.size())
        {
           ans=v[k-1]; 
        }
        return ans;
        
    }
};