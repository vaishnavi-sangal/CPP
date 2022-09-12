class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int p) {
        sort(t.begin(), t.end());
        
        int s = 0, e = t.size() - 1, ans = 0;
        while(s <= e) {
            if(t[s] <= p) p -= t[s++], ans++;
            else {
                if(s == e) break;
                if(!ans) return 0;
                else p += t[e--], ans--;
            }
        }
        return ans;
    }
};
