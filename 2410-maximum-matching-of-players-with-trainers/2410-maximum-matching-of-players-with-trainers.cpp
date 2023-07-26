class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int c=0;
        int n=players.size();
        int m=trainers.size();
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(players[i]<=trainers[j])
            {
                i++;
                j++;
                c++;
            }
            else if(players[i]>trainers[j])
            {
                j++;
            }
        }
        return c;
        
    }
};