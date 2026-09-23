class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        for (int i = 1; i < INT_MAX; i++) {
            if (n > i) {
                n = n - i;
                count++;
            } else if (n == i) {
                count++;
                return count;
            } else
                return count;
        }
        return 0;
    }
};