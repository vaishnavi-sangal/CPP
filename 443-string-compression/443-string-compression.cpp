class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
     //   vector<char>v;
        int a=0;
        int c=0;
        if(n==1)
        {
            return 1;
            
        }
      int j,i=0;
        
        while(i<n)
        {
            j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            chars[a++]=chars[i];
            int c=j-i;
            if(c>1)
            {
                string count=to_string(c);
                for(char ch:count)
                {
                chars[a++]=ch;
                }
            }
        
        i=j;
        }
        return a;
        
        
    }
};