class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1) return false;
        double ans = log10(n)/log10(4);
        int ans2 = ans; // check if the ans is int or fractions.
        return ans == ans2 ? 1 : 0;
    }
};