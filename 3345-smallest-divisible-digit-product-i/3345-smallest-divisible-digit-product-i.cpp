class Solution {
public:
    int smallestNumber(int n, int t) {
        int d;
        for (int i = n;; i++) {
            int product = 1;
            int x = i;
            while (x != 0) {
                d = x % 10;
                product *= d;
                x/=10;
            }
            if (product % t == 0)
                return i;
        }
        return 0;
    }
};