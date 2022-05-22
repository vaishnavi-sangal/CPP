class Solution {
public:
    string countAndSay(int n) {
    string ans="1",temp;
        if(n==1)
        {
            return "1";
        }
        
        int count,s;n--;
        
            while(n--)
            {
                temp="";
                 s=ans.size();
                for(int i=0;i<s;i++)
                {
                    count=1;
            
          while(i<s-1 && ans[i]==ans[i+1])
          {
              count++;
              i++;
          }
                    temp+=count+'0';
                    temp+=ans[i];
        }
                ans=temp;
        }
            return ans;
    }
};