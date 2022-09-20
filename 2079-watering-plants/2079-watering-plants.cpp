class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n=plants.size();
        int steps=0;
        int m=capacity;
        for(int i=0;i<n;i++)
        {
            if(plants[i]<=capacity)
            {
                steps++;
                capacity-=plants[i];
            }
            else
            {
                steps+=i;
                capacity=m;
                steps+=i+1;
                capacity-=plants[i];
                
            }
        }
        return steps;
        
    }
};