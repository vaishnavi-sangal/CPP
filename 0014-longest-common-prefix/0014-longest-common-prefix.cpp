



class Solution {
public:
    bool isPossible(vector<string> &arr, int m){
        for(int i = 1; i < arr.size(); i++){
            string &temp = arr[i];
            int j = 0;
            while(j < m){
                if(temp[j] != arr[0][j]) return false;
                j++;
            }
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int l = 0, r = strs[0].size(), ans = 0;
        for(auto &s: strs){
            int len = s.size();
            r = min(r, len);
        }
        
        while(l <= r){
            int m = (l+r)>>1;
            if(isPossible(strs, m)){
                ans = m;
                l = m+1;
            }
            else
                r = m-1;
        }
        return strs[0].substr(0, ans);
    }
};