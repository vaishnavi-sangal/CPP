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
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>>a;
        if(n==0 && newInterval.size())
        {
            
        a.push_back(newInterval);
            return a;
        }
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            int start=intervals[i][0];
            if(start<newInterval[0])
            {
                a.push_back(intervals[i]);
            }
            else
            {
                flag=false;
            a.push_back(newInterval);
                a.push_back(intervals[i]);
            
}
        }
        if(flag)
                        a.push_back(newInterval);

        vector<vector<int>>v=merge(a);
        return v;
    }
};