class Solution {
public:
    string removeKdigits(string num, int k) {
     
                 string s = "";
        int n = num.length();
        if(n == k)  return "0";
        for(int i = 0 ; i < n ; i++){
            // If we have smaller digit and we still can remove, so we remove 
            while(s.size() > 0 && s[s.size()-1] > num[i] && k > 0){
                s.pop_back();
                k--;
            }
            s.push_back(num[i]);
        }
        //Remove leading zeros
        while(s[0] == '0'){
            s.erase(0, 1);
        }
        //Remove digits from back if k > 0
        while(k > 0 && s.length() > 0){
            s.pop_back();
            k--;
        }
        if(s.length() == 0)   return "0";
        return s;
        if(s.length() == 0)   return "0";
        return s;
        
    }
};