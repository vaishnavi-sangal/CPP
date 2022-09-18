class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        int start=0;
        int end=0;
        int n=s.size();
        
    
        set<char>st;
        while(start<n)
        {
            auto it=st.find(s[start]);
            if(it==st.end())
            {
                st.insert(s[start]);
                int a=start-end;
                int b=a+1;
                if(b>maxi)
                maxi=max(maxi,b);
                start++;
                
            }
            else
            {
                st.erase(s[end]);
                end++;
            }

        }
        
        
        return maxi;
        
        
    }
};