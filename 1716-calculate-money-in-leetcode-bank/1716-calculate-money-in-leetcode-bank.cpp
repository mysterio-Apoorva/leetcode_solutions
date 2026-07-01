class Solution {
public:
    int totalMoney(int n) {
        int d = n / 7, r = n % 7, mon = 1, sum = 0;

        for (int i = 0; i <= d; i++) {
            if (i == d) {
                for (int j = 0; j < r; j++) {
                    sum = sum + mon + j;
                }
            } else {
                for (int j = 0; j < 7; j++) {
                    sum = sum + mon + j;
                }
            }
            mon++;
        }
        return sum;
    }
};