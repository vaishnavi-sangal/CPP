class Solution {
public:
    int heightChecker(vector<int>& heights) {
         int n=heights.size();
     
        vector<int>h(n,0);
        int c=0;
     //   int n=heights.size();
        h=heights;
          /*  for(int i=0;i<n;i++)
            {
                h[i]=heights[i];
                
            }*/
        
        sort(h.begin(),h.end());
        for(int i=0;i<n;i++)
        {
            if(h[i]!=heights[i])
            {
                c++;
            }
        }
        return c;
    }
};