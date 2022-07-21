class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        vector<int>lastindex(26,0);
        for(int i=0;i<n;i++)
        {
            lastindex[s[i]-'a']=i;
        }
        vector<bool>seen(26,false);
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            int curr=s[i]-'a';
            if(seen[curr])
            {
                continue;
            }
            while((st.size()>0) && (st.top()>s[i]) && (i<lastindex[st.top()-'a']))
            {
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            seen[curr]=true;
        }
        string res="";
     //   cout<<st.size();
        while((st.size())>0)
        {
            res+=st.top();
            
             st.pop();
        }
     reverse(res.begin(),res.end());
        return res;
        
        
    }
};