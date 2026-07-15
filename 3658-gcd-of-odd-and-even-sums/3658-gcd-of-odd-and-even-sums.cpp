class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum1 = pow(n, 2);
        int sum2 = n * (n + 1);
        int x = gcd(sum1, sum2);
        return x;
    }
};