class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
     int n=intervals.size();
        if(n==1)
            return intervals;
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        int end=intervals[0][1];
        ans.push_back(intervals[0]);
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]<=end)
            {
                end=max(intervals[i][1],end);
                ans.back()[1]=end;
            }
            else
            {
                ans.push_back(intervals[i]);
                                end = intervals[i][1];

            }
        }
   return ans;
    }
};
/*sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        int temp = intervals[0][1];
        for(int i = 1;i<n;i++){
            if(temp >= intervals[i][0])
            {
                temp = max(intervals[i][1],temp);
                ans.back()[1] = temp;
            }
            else{
                ans.push_back(intervals[i]);
                temp = intervals[i][1];
            }
        }
        return ans;*/