class Solution {
    public:
    void solve (string digits,int index,string mapping[],string s,vector<string>&ans)
    {
        if(index==digits.length())
        {
            ans.push_back(s);
            return ;
        }
        int value=digits[index]-'0';
        string al=mapping[value];
        for(int i=0;i<al.length();i++)
        {
            s.push_back(al[i]);
            solve(digits,index+1,mapping,s,ans);
            s.pop_back();
        }
        
    }
public:
    vector<string> letterCombinations(string digits) {
         vector<string>ans;
        string s="";
        if(digits.length()==0)
        {
            return ans;
        }
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
        int index=0;
        solve(digits,index,mapping,s,ans);
        return ans;
        
    }
};