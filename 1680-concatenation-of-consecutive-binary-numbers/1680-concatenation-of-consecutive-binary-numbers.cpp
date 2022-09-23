class Solution {
public:
    int concatenatedBinary(int n) {
        int mod = 1e9 + 7;
        long long ans = 0;
        int len = 0;
        for (int i = 1; i <= n; i++) {
            if ((i & (i - 1)) == 0) {  // how much to be shifted id=s denoted by this
                len++;
            }
            ans = ((ans << len) + i) % mod;  // shiftd+original number is result;
        }
        return ans;
    }
};