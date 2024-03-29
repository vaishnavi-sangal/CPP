class Solution {
public:
    bool isPowerOfThree(int n) {
        // no one power of tree in less or equal zero
        if(n <= 0) return false;
        
        // while n can divide by 3
        while(n % 3 == 0)
            n /= 3;
        
        if(n == 1) return true;
        else return false;
    }
};