class Solution {
public:
    int minPartitions(string s) {
        int n=s.size();
        int m=0;
        for(int i=0;i<n;i++)
        {
            m=max(m,s[i]-48);
        }
        return m;
        
    }
};