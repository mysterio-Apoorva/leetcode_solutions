class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long d;
        long long x1 = 0;
        while (n != 0) {
            d = n % 10;
            if (d != 0) {
                x1 = x1 * 10 + d;
                sum = sum + d;
            }
            n = n / 10;
        }
        long long x = 0;
        while (x1 != 0) {
            d = x1 % 10;
            if (d != 0)
                x = x * 10 + d;
            x1 = x1 / 10;
        }
        return sum * x;
    }
};