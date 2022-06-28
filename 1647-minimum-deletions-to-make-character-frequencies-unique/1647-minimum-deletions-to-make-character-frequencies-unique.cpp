class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>m;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        vector<int>ans;
        set<int>st;
        int count=0;
        for(auto it:m)
        {
            if(st.find(it.second) == st.end() && it.second!=0)
            {
                st.insert(it.second);
                
            }
            else
            {
              while(st.find(it.second) !=st.end() && it.second!=0)
              {
                  count++;
                  it.second--;
              }
                if(it.second!=0)
                {
                    st.insert(it.second);
                }
                
            }
        
        }
      
return count;
        
    }
};
