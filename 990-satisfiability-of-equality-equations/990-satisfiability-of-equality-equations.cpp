class Solution {
public:
    int parent[26];
    
    int findParent(int p) {
        return parent[p]==p ? p : parent[p]=findParent(parent[p]);
    }
    
    bool equationsPossible(vector<string>& eq) { 
        for(int i=0; i<26; i++)
            parent[i]=i;
        int u, v;
        
        for(int i=0; i<eq.size(); i++){
            if(eq[i][1]=='=') {
                u = findParent(eq[i][0]-'a');
                v = findParent(eq[i][3]-'a');
                parent[u] = v;
            }
        }
        
        for(int i=0; i<eq.size(); i++){
            if(eq[i][1]=='!') {
                u = findParent(eq[i][0]-'a');
                v = findParent(eq[i][3]-'a');
                if(u==v)
                    return false;
            }
        }
        
        return true;
    }
};