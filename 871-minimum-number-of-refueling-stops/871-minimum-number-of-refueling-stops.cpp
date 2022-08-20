class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n=stations.size();
        int res=0,i=0;
        // int dist=startFuel;
        priority_queue<int> pq;
        while(startFuel<target){
            
            while(i<n && startFuel>=stations[i][0]){
                pq.push(stations[i++][1]);
                // i++;
            }
            if(pq.empty())
                return -1;
            startFuel+=pq.top();
            pq.pop();
            res++;
        }
        return res;
    }
};