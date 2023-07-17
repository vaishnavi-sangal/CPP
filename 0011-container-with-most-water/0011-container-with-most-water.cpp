class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,h=n-1;
        int area=INT_MIN;
        
        while(l<h)
        {
            area=max(area,min(height[l],height[h])*abs(h-l));
            if(height[l]<height[h])
            {
                l++;
                
            }
          
            else
            {
            h--;
                }
        
        }
        
    
        return area;
        
    }
};