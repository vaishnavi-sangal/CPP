
class Solution {
public:
int furthestBuilding(vector<int>& heights, int bricks, int ladders) 
{
	int n=heights.size();
	priority_queue<int,vector<int>,greater<int>> q;
	for(int i=0;i<n-1;i++)
	{
		if(heights[i+1]>heights[i])
		{
			q.push(heights[i+1]-heights[i]);
			if(ladders>0) ladders--;
			else
			{
				if(bricks>=q.top())
				{
					bricks-=q.top();
					q.pop();
				}
				else return i;
			}
        }
        }
       return n-1;
     
    }
};
/*class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int, vector<int>, greater<int>> pq;
        
        int n = heights.size();
        int brickSum = 0;
        for(int i = 1; i < n; i++) {
            int diff = heights[i] - heights[i-1];
            if(diff <= 0) continue;
            
            pq.push(diff);
            if(pq.size() > ladders) {
                brickSum += pq.top();
                pq.pop();
            }   
            if(brickSum > bricks) return i - 1;
        }
        return n-1;    
    }
};*/