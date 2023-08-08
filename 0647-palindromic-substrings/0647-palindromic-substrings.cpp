class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size(), count = 0;
        if(n == 1) return 1;
        int i, j;
        
        // considering odd length substring
        for(int k = 0; k < n; k++) {
            i = k-1, j = k+1;
            count++;
            while(i >= 0 && j < n) {
                if(s[i] != s[j]) break;
                count++;
                i--;
                j++;
            }
        }
        
        //considering even length substring
        for(int k = 0; k < n; k++) {
            i = k, j = k+1;
            if(s[i] != s[j]) continue;
            count++;
            i--;
            j++;
            while(i >= 0 && j < n) {
                if(s[i] != s[j]) break;
                count++;
                i--;
                j++;
            }
        }

        return count;
    }
};