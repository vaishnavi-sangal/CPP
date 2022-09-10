class Solution {
public:
    string removeStars(string s) {
        string str="";
        string ans="";
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
          
            if(s[i]=='*')
                st.pop();
            else
                st.push(s[i]);
        }
        while(!st.empty())
        {
            
            str+=st.top();
            st.pop();
           
        }
        for(int k=str.size()-1;k>=0;k--)
        {
            if(str[k]!=32)
            {
                ans+=str[k];
            }
        }
     //   reverse(str.begin(),str.end());
        return ans;
        
    }
};



