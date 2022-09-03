class Solution {
public:
    void dfs(int n,int k,int curr,int pos,int prev,vector<int>&ans)
    {
        if(pos==n)
        {
            ans.push_back(curr);
            return;
        }
        int next=prev+k;
        if(next<10)
        dfs(n,k,curr*10+next,pos+1,next,ans);
        
        next=prev-k;
        if(k!=0&&next>=0)
            dfs(n,k,curr*10+next,pos+1,next,ans);
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        
        if(n==1)
            return{0,1,2,3,4,5,6,7,8,9};
        
        vector<int>ans;
        for(int i=1;i<10;i++)
    dfs(n,k,i,1,i,ans);
        return ans;
        
        
    }
};