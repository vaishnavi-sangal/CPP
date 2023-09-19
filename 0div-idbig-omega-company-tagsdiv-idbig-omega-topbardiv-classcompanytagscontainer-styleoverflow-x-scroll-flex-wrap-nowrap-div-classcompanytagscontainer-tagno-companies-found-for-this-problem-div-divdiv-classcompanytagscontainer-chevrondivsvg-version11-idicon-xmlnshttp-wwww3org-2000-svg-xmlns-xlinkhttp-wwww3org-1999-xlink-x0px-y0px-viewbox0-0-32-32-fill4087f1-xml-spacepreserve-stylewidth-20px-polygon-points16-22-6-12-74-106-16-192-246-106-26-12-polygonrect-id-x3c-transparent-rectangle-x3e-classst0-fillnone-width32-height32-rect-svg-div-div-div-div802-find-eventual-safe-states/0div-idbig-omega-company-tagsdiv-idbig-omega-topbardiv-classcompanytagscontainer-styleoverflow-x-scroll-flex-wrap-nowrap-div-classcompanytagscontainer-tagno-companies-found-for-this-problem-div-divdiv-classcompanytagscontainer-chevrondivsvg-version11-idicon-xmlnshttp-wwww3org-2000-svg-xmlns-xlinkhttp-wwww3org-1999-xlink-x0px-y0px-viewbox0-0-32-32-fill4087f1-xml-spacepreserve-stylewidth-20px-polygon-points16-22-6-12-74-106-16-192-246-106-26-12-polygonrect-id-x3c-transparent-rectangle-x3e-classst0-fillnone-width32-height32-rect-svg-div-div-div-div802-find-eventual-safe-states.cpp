class Solution {
public:
    bool dfs(int node,vector<int>&vis,vector<int>&pathVis,vector<int>&check,vector<int>adj[]){
        vis[node]=1;
        pathVis[node]=1;
        check[node]=0;
        for(auto child:adj[node]){
            if(!vis[child]){
                if(dfs(child,vis,pathVis,check,adj)){
                    check[node]=0;
                    return true;
                }
            }else if(pathVis[child]){
                check[node]=0;
                return true;
            }
        }
        pathVis[node]=0;
        check[node]=1;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<graph[i].size();j++){
                adj[i].push_back(graph[i][j]);
            }
        }
        vector<int>vis(n,0);
        vector<int>pathVis(n,0);
        vector<int>check(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,vis,pathVis,check,adj);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(check[i]==1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};