class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int c=0;
        string s=to_string(num);
        int n=s.size();
        unordered_map<char,int>mp;
        string str="";
        int i=0,j=0;
        while(j<n)
        {
            if((j-i+1)<k)
            {
                str+=s[j];
                mp[s[j]]++;
                j++;
            }
            else if((j-i+1)==k)
            {
                str+=s[j];
                
                mp[s[j]]++;
                int a=stoi(str);
                if(a!=0 && num % a ==0)
                {
                    c++;
                }
                str.erase(0,1);
                i++;
                j++;
            }
        }
        return c;
    }
};