class Solution {
public:
    bool isValid(string str) {
        
   int n=str.size();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='[' || str[i]=='{' || str[i]=='(')
            {
                st.push(str[i]);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else
                {
                    if((str[i]==')' && st.top()=='(') || (str[i]=='}' && st.top()=='{') || (str[i]==']' && st.top()=='['))
                    {
                        st.pop();
                    }
                    else
                    {
return false;
                    }
                }
            }
        }
        
        return st.empty()?true:false;
    }
};